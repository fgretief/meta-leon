DEFAULTTUNE ?= "supersparc"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[supersparc] = "Enable SuperSparc specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "supersparc", "-mcpu=supersparc", "", d)}"

AVAILTUNES += "supersparc"

TUNE_FEATURES_tune-supersparc = "v8 m32 supersparc"
TUNE_PKGARCH_tune-supersparc = "supersparc"
PACKAGE_EXTRA_ARCHS_tune-supersparc = "${PACKAGE_EXTRA_ARCHS_tune-sparc} supersparc"
