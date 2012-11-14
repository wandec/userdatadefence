#############################################################################
# Makefile for building: userdatadefence
# Generated by qmake (2.01a) (Qt 4.8.3) on: ?? ????. 15 01:52:43 2012
# Project:  userdatadefence.pro
# Template: subdirs
# Command: /usr/bin/qmake-qt4 -spec /usr/lib64/qt4/mkspecs/linux-g++ -o Makefile userdatadefence.pro
#############################################################################

first: make_default
MAKEFILE      = Makefile
QMAKE         = /usr/bin/qmake-qt4
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		sub-UDDPolicy \
		sub-UDDaemon \
		sub-UDDBus \
		sub-UDDExec \
		sub-UDDTray

UDDPolicy/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) UDDPolicy/ || $(MKDIR) UDDPolicy/ 
	cd UDDPolicy/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDPolicy/UDDPolicy.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDPolicy-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) UDDPolicy/ || $(MKDIR) UDDPolicy/ 
	cd UDDPolicy/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDPolicy/UDDPolicy.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDPolicy: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE)
sub-UDDPolicy-make_default: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) 
sub-UDDPolicy-make_first: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) first
sub-UDDPolicy-all: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) all
sub-UDDPolicy-clean: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) clean
sub-UDDPolicy-distclean: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) distclean
sub-UDDPolicy-install_subtargets: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) install
sub-UDDPolicy-uninstall_subtargets: UDDPolicy/$(MAKEFILE) FORCE
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) uninstall
UDDaemon/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) UDDaemon/ || $(MKDIR) UDDaemon/ 
	cd UDDaemon/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDaemon/UDDaemon.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDaemon-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) UDDaemon/ || $(MKDIR) UDDaemon/ 
	cd UDDaemon/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDaemon/UDDaemon.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDaemon: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE)
sub-UDDaemon-make_default: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) 
sub-UDDaemon-make_first: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) first
sub-UDDaemon-all: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) all
sub-UDDaemon-clean: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) clean
sub-UDDaemon-distclean: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) distclean
sub-UDDaemon-install_subtargets: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) install
sub-UDDaemon-uninstall_subtargets: UDDaemon/$(MAKEFILE) FORCE
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) uninstall
UDDBus/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) UDDBus/ || $(MKDIR) UDDBus/ 
	cd UDDBus/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDBus/UDDBus.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDBus-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) UDDBus/ || $(MKDIR) UDDBus/ 
	cd UDDBus/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDBus/UDDBus.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDBus: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE)
sub-UDDBus-make_default: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) 
sub-UDDBus-make_first: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) first
sub-UDDBus-all: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) all
sub-UDDBus-clean: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) clean
sub-UDDBus-distclean: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) distclean
sub-UDDBus-install_subtargets: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) install
sub-UDDBus-uninstall_subtargets: UDDBus/$(MAKEFILE) FORCE
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) uninstall
UDDExec/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) UDDExec/ || $(MKDIR) UDDExec/ 
	cd UDDExec/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDExec/UDDExec.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDExec-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) UDDExec/ || $(MKDIR) UDDExec/ 
	cd UDDExec/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDExec/UDDExec.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDExec: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE)
sub-UDDExec-make_default: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) 
sub-UDDExec-make_first: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) first
sub-UDDExec-all: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) all
sub-UDDExec-clean: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) clean
sub-UDDExec-distclean: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) distclean
sub-UDDExec-install_subtargets: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) install
sub-UDDExec-uninstall_subtargets: UDDExec/$(MAKEFILE) FORCE
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) uninstall
UDDTray/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) UDDTray/ || $(MKDIR) UDDTray/ 
	cd UDDTray/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDTray/UDDTray.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDTray-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) UDDTray/ || $(MKDIR) UDDTray/ 
	cd UDDTray/ && $(QMAKE) /home/user/workspace/userdatadefence/UDDTray/UDDTray.pro -spec /usr/lib64/qt4/mkspecs/linux-g++ -o $(MAKEFILE)
sub-UDDTray: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE)
sub-UDDTray-make_default: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) 
sub-UDDTray-make_first: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) first
sub-UDDTray-all: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) all
sub-UDDTray-clean: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) clean
sub-UDDTray-distclean: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) distclean
sub-UDDTray-install_subtargets: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) install
sub-UDDTray-uninstall_subtargets: UDDTray/$(MAKEFILE) FORCE
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: userdatadefence.pro  /usr/lib64/qt4/mkspecs/linux-g++/qmake.conf /usr/lib64/qt4/mkspecs/common/unix.conf \
		/usr/lib64/qt4/mkspecs/common/linux.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt4/mkspecs/common/g++-base.conf \
		/usr/lib64/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt4/mkspecs/qconfig.pri \
		/usr/lib64/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt4/mkspecs/features/qt_config.prf \
		/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt4/mkspecs/features/default_pre.prf \
		/usr/lib64/qt4/mkspecs/features/release.prf \
		/usr/lib64/qt4/mkspecs/features/default_post.prf
	$(QMAKE) -spec /usr/lib64/qt4/mkspecs/linux-g++ -o Makefile userdatadefence.pro
/usr/lib64/qt4/mkspecs/common/unix.conf:
/usr/lib64/qt4/mkspecs/common/linux.conf:
/usr/lib64/qt4/mkspecs/common/gcc-base.conf:
/usr/lib64/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt4/mkspecs/common/g++-base.conf:
/usr/lib64/qt4/mkspecs/common/g++-unix.conf:
/usr/lib64/qt4/mkspecs/qconfig.pri:
/usr/lib64/qt4/mkspecs/features/qt_functions.prf:
/usr/lib64/qt4/mkspecs/features/qt_config.prf:
/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt4/mkspecs/features/default_pre.prf:
/usr/lib64/qt4/mkspecs/features/release.prf:
/usr/lib64/qt4/mkspecs/features/default_post.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -spec /usr/lib64/qt4/mkspecs/linux-g++ -o Makefile userdatadefence.pro

qmake_all: sub-UDDPolicy-qmake_all sub-UDDaemon-qmake_all sub-UDDBus-qmake_all sub-UDDExec-qmake_all sub-UDDTray-qmake_all FORCE

make_default: sub-UDDPolicy-make_default sub-UDDaemon-make_default sub-UDDBus-make_default sub-UDDExec-make_default sub-UDDTray-make_default FORCE
make_first: sub-UDDPolicy-make_first sub-UDDaemon-make_first sub-UDDBus-make_first sub-UDDExec-make_first sub-UDDTray-make_first FORCE
all: sub-UDDPolicy-all sub-UDDaemon-all sub-UDDBus-all sub-UDDExec-all sub-UDDTray-all FORCE
clean: sub-UDDPolicy-clean sub-UDDaemon-clean sub-UDDBus-clean sub-UDDExec-clean sub-UDDTray-clean FORCE
distclean: sub-UDDPolicy-distclean sub-UDDaemon-distclean sub-UDDBus-distclean sub-UDDExec-distclean sub-UDDTray-distclean FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-UDDPolicy-install_subtargets sub-UDDaemon-install_subtargets sub-UDDBus-install_subtargets sub-UDDExec-install_subtargets sub-UDDTray-install_subtargets FORCE
uninstall_subtargets: sub-UDDPolicy-uninstall_subtargets sub-UDDaemon-uninstall_subtargets sub-UDDBus-uninstall_subtargets sub-UDDExec-uninstall_subtargets sub-UDDTray-uninstall_subtargets FORCE

sub-UDDPolicy-check: UDDPolicy/$(MAKEFILE)
	cd UDDPolicy/ && $(MAKE) -f $(MAKEFILE) check
sub-UDDaemon-check: UDDaemon/$(MAKEFILE)
	cd UDDaemon/ && $(MAKE) -f $(MAKEFILE) check
sub-UDDBus-check: UDDBus/$(MAKEFILE)
	cd UDDBus/ && $(MAKE) -f $(MAKEFILE) check
sub-UDDExec-check: UDDExec/$(MAKEFILE)
	cd UDDExec/ && $(MAKE) -f $(MAKEFILE) check
sub-UDDTray-check: UDDTray/$(MAKEFILE)
	cd UDDTray/ && $(MAKE) -f $(MAKEFILE) check
check: sub-UDDPolicy-check sub-UDDaemon-check sub-UDDBus-check sub-UDDExec-check sub-UDDTray-check
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

