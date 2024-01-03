SUMMARY = "bitbake-layers recipe"
DESCRIPTION = "Recipe created by bitbake-layers"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

#LIC_FILES_CHKSUM = "file://COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"


python do_display_banner() {
    bb.plain("***********************************************");
    bb.plain("*                                             *");
    bb.plain("*  Example recipe created by bitbake-layers   *");
    bb.plain("*                                             *");
    bb.plain("***********************************************");
}

addtask display_banner before do_build

SRC_URI = "file://main.cpp"
S = "${WORKDIR}"
do_populate_sdk(){
}

do_compile() {
    ${CXX} ${CXXFLAGS} ${LDFLAGS} main.cpp -o my-socket-server
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 my-socket-server ${D}${bindir}
}

FILES_${PN} += "${bindir}/my-socket-server"


