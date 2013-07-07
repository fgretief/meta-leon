DEFAULTTUNE ?= "ultrasparc"

require conf/machine/include/sparc/arch-sparc.inc

TUNEVALID[ultrasparc] = "Enable UltraSPARC specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "ultrasparc", "-mcpu=ultrasparc", "", d)}"

TUNEVALID[ultrasparc3] = "Enable UltraSPARC III specific processor optimizations"
TUNE_CCARGS += "${@bb.utils.contains("TUNE_FEATURES", "ultrasparc3", "-mcpu=ultrasparc3", "", d)}"

AVAILTUNES += "ultrasparc ultrasparc3"

TUNE_FEATURES_tune-ultrasparc = "v9 m64 ultrasparc"
TUNE_PKGARCH_tune-ultrasparc = "ultrasparc"
PACKAGE_EXTRA_ARCHS_tune-ultrasparc = "${PACKAGE_EXTRA_ARCHS_tune-sparc} ultrasparc"

TUNE_FEATURES_tune-ultrasparc3 = "v9 m64 ultrasparc3"
TUNE_PKGARCH_tune-ultrasparc3 = "ultrasparc3"
PACKAGE_EXTRA_ARCHS_tune-ultrasparc3 = "${PACKAGE_EXTRA_ARCHS_tune-sparc} ultrasparc3"
