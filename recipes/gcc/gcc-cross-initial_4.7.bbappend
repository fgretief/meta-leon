FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

PRINC := "${@int(PRINC) + 1}"

SRC_URI += " \
    file://remove-linker-option-for-solaris.patch \
    "
