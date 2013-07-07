DEFAULTTUNE ?= "niagara"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[niagara] = "Enable Sun UltraSPARC T1 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "niagara", "-mcpu=niagara", "", d)}"

TUNEVALID[niagara2] = "Enable Sun UltraSPARC T2 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "niagara2", "-mcpu=niagara2", "", d)}"

TUNEVALID[niagara3] = "Enable Sun UltraSPARC T3 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "niagara3", "-mcpu=niagara3", "", d)}"

TUNEVALID[niagara4] = "Enable Sun UltraSPARC T4 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "niagara4", "-mcpu=niagara4", "", d)}"

AVAILTUNES += "niagara niagara2 niagara3 niagara4"

TUNE_FEATURES_tune-niagara = "v9 m64 niagara"
TUNE_PKGARCH_tune-niagara = "niagara"
PACKAGE_EXTRA_ARCHS_tune-niagara = "${PACKAGE_EXTRA_ARCHS_tune-sparc} niagara"

TUNE_FEATURES_tune-niagara2 = "v9 m64 niagara2"
TUNE_PKGARCH_tune-niagara2 = "niagara2"
PACKAGE_EXTRA_ARCHS_tune-niagara2 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} niagara2"

TUNE_FEATURES_tune-niagara3 = "v9 m64 niagara3"
TUNE_PKGARCH_tune-niagara3 = "niagara3"
PACKAGE_EXTRA_ARCHS_tune-niagara3 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} niagara3"

TUNE_FEATURES_tune-niagara4 = "v9 m64 niagara4"
TUNE_PKGARCH_tune-niagara4 = "niagara4"
PACKAGE_EXTRA_ARCHS_tune-niagara4 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} niagara4"
