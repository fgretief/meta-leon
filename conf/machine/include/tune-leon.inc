DEFAULTTUNE ?= "leon3"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[leon2] = "Enable LEON2 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "leon2", "-mcpu=leon", "", d)}"

TUNEVALID[leon3] = "Enable LEON3 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "leon3", "-mcpu=leon", "", d)}"

AVAILTUNES += "leon2 leon3"

TUNE_FEATURES_tune-leon2 = "v8 m32 leon2"
TUNE_PKGARCH_tune-leon2 = "leon2"
PACKAGE_EXTRA_ARCHS_tune-leon2 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} leon2"

TUNE_FEATURES_tune-leon3 = "v8 m32 leon3"
TUNE_PKGARCH_tune-leon3 = "leon3"
PACKAGE_EXTRA_ARCHS_tune-leon3 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} leon3"
