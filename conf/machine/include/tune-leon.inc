DEFAULTTUNE ?= "leon"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[leon] = "Enable LEON specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "leon", "-mcpu=leon", "", d)}"

AVAILTUNES += "leon"

TUNE_FEATURES_tune-leon = "v8 m32 leon"
TUNE_PKGARCH_tune-leon = "leon"
PACKAGE_EXTRA_ARCHS_tune-leon = "${PACKAGE_EXTRA_ARCHS_tune-sparc} leon"
