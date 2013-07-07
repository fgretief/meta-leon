DEFAULTTUNE ?= "cypress"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[cypress] = "Enable Cypress CY7C602 specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "cypress", "-mcpu=cypress", "", d)}"

AVAILTUNES += "cypress"

TUNE_FEATURES_tune-cypress = "v7 m32 cypress"
TUNE_PKGARCH_tune-cypress = "cypress"
PACKAGE_EXTRA_ARCHS_tune-cypress = "${PACKAGE_EXTRA_ARCHS_tune-sparc} cypress"
