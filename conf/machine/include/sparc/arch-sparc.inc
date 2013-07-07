# SPARC Architecture definition

DEFAULTTUNE ?= "sparc"

TUNE_PKGARCH = "${TUNE_PKGARCH_tune-${DEFAULTTUNE}}"

TUNEVALID[v7] = "Enable instructions for SPARC v7"

TUNEVALID[v8] = "Enable instructions for SPARC v8"
TUNECONFLICTS[v8] = "v7 sparclite sparclet v9"

TUNEVALID[sparclite] = "Enable instructions for SPARClite variant"
TUNECONFLICTS[sparclite] = "v7 v8 sparclet v9"

TUNEVALID[sparclet] = "Enable instructions for SPARClet variant"
TUNECONFLICTS[sparclet] = "v7 v8 sparclite v9"

TUNEVALID[v9] = "Enable instructions for SPARC v9"
TUNECONFLICTS[v9] = "v7 v8 sparclite sparclet"

TUNEVALID[m32] = "Sparc 32-bit environment"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "m32", " -m32", "", d)}"
TUNE_ARCH .= "${@bb.utils.contains("TUNE_FEATURES", "m32", "sparc", "", d)}"

TUNEVALID[m64] = "Sparc 64-bit environment"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "m64", " -m64", "", d)}"
TUNE_ARCH .= "${@bb.utils.contains("TUNE_FEATURES", "m64", "sparc", "", d)}"

TUNEVALID[fpu-hard] = "Use hardware FPU."
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "fpu-hard", " -mhard-float", "", d)}"

TUNEVALID[fpu-soft] = "Use software FPU."
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "fpu-soft", " -msoft-float", "", d)}"
TARGET_FPU .= "${@bb.utils.contains("TUNE_FEATURES", "fpu-soft", "soft", "", d)}"

# Basic tune definitions
AVAILTUNES += "sparc"

TUNE_FEATURES_tune-sparc = "v7 m32 fpu-hard"
BASE_LIB_tune-sparc = "lib"
TUNE_PKGARCH_tune-sparc = "sparc"
PACKAGE_EXTRA_ARCHS_tune-sparc = "sparc"
