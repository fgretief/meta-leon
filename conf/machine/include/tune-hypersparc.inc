DEFAULTTUNE ?= "hypersparc"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[hypersparc] = "Enable HyperSPARC specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "hypersparc", "-mcpu=hypersparc", "", d)}"

AVAILTUNES += "hypersparc"

TUNE_FEATURES_tune-hypersparc = "v8 m32 hypersparc"
TUNE_PKGARCH_tune-hypersparc = "hypersparc"
PACKAGE_EXTRA_ARCHS_tune-hypersparc = "${PACKAGE_EXTRA_ARCHS_tune-sparc} hypersparc"
