# Makefile.am for opensn0w
#
# Licensed under GPL3. See file COPYING.

ERROR_CFLAGS = \
	$(OPENSN0W_CFLAGS) \
	-Wall \
	-I. \
	-Ixpwntool \
	-I./include \
	-Ilibusb-1.0

AM_CXXFLAGS = \
	$(OPENSN0W_CFLAGS) \
	-Wall \
	-I. \
	-Ixpwntool \
	-I./include \
	-Ilibusb-1.0 \
	$(CFLAGS)

AM_CFLAGS = \
	$(ERROR_CFLAGS) \
	$(ZLIB_CFLAGS) 

bin_PROGRAMS = opensn0w

man1_MANS = opensn0w.1

nodist_opensn0w_SOURCES = date.h
CLEANFILES = date.h

date.h: opensn0w.rc
	@date "+#define __BUILDDATE__ %g%m%d-%H%M" > date.h
	@echo \#define __BUILDMACHINE__ ${USERDOMAIN}\(${USERNAME}\) >> date.h

opensn0w_SOURCES = 8900.c \
	abstractfile.c \
	base64.c \
	crtsup.c \
	img2.c \
	img3.c \
	libirecovery.c \
	libpartial.c \
	limera1n.c \
	lzss.c \
	lzssfile.c \
	main.c \
	nor_files.c \
	patch.c \
	patches.c \
	plist.c \
	pwnage2.c \
	shatter.c \
	shell.c \
	sighldr.c \
	steaks4uce.c \
	bsdiff.c \
	btree.c \
	catalog.c \
	extents.c \
	fastunicodecompare.c \
	flatfile.c \
	hfs.c \
	hfscompress.c \
	hfslib.c \
	rawfile.c \
	utility.c \
	volume.c \
	ramdisk.c \
	xattr.c


.rc.o:
	@echo "  WRES  " $<
	@windres -I/mingw/include $(RCFLAGS) -o $@ $<
	@rm date.h

if WINDOWS

opensn0w.$(OBJEXT): date.h

        opensn0w_SOURCES += opensn0w.rc win32.cpp
endif


opensn0wkeydir = $(datarootdir)/FirmwareBundles
opensn0wkey_DATA = Keys/AppleTV2,1_4.1_8M89.plist \
	Keys/AppleTV2,1_4.2.1_8C154.plist \
	Keys/AppleTV2,1_4.2_8C150.plist \
	Keys/AppleTV2,1_4.3_8F191m.plist \
	Keys/AppleTV2,1_4.3_8F202.plist \
	Keys/AppleTV2,1_4.3_8F305.plist \
	Keys/AppleTV2,1_4.3_8F455.plist \
	Keys/AppleTV2,1_4.3_8F5148c.plist \
	Keys/AppleTV2,1_5.0.1_9A405l.plist \
	Keys/AppleTV2,1_5.0.1_9A406a.plist \
	Keys/AppleTV2,1_5.0_9A334v.plist \
	Keys/AppleTV2,1_5.0_9A335a.plist \
	Keys/AppleTV2,1_5.0_9A336a.plist \
	Keys/iPad1,1_3.2.1_7B405.plist \
	Keys/iPad1,1_3.2.2_7B500.plist \
	Keys/iPad1,1_3.2_7B367.plist \
	Keys/iPad1,1_4.2.1_8C148.plist \
	Keys/iPad1,1_4.2_8C134.plist \
	Keys/iPad1,1_4.2_8C134b.plist \
	Keys/iPad1,1_4.2_8C5115c.plist \
	Keys/iPad1,1_4.3.1_8G4.plist \
	Keys/iPad1,1_4.3.2_8H7.plist \
	Keys/iPad1,1_4.3.3_8J3.plist \
	Keys/iPad1,1_4.3.4_8K2.plist \
	Keys/iPad1,1_4.3.5_8L1.plist \
	Keys/iPad1,1_4.3_8F190.plist \
	Keys/iPad1,1_4.3_8F5148b.plist \
	Keys/iPad1,1_5.0.1_9A405.plist \
	Keys/iPad1,1_5.0_9A334.plist \
	Keys/iPad2,1_4.3.1_8G4.plist \
	Keys/iPad2,1_4.3.2_8H7.plist \
	Keys/iPad2,1_4.3.3_8J2.plist \
	Keys/iPad2,1_4.3.4_8K2.plist \
	Keys/iPad2,1_4.3.5_8L1.plist \
	Keys/iPad2,1_4.3_8F191.plist \
	Keys/iPad2,1_5.0.1_9A405.plist \
	Keys/iPad2,1_5.0_9A334.plist \
	Keys/iPad2,2_4.3.1_8G4.plist \
	Keys/iPad2,2_4.3.2_8H7.plist \
	Keys/iPad2,2_4.3.3_8J2.plist \
	Keys/iPad2,2_4.3.4_8K2.plist \
	Keys/iPad2,2_4.3.5_8L1.plist \
	Keys/iPad2,2_4.3_8F191.plist \
	Keys/iPad2,2_5.0.1_9A405.plist \
	Keys/iPad2,2_5.0_9A334.plist \
	Keys/iPad2,3_4.3.1_8G4.plist \
	Keys/iPad2,3_4.3.2_8H8.plist \
	Keys/iPad2,3_4.3.3_8J2.plist \
	Keys/iPad2,3_4.3.4_8K2.plist \
	Keys/iPad2,3_4.3.5_8L1.plist \
	Keys/iPad2,3_4.3_8F191.plist \
	Keys/iPad2,3_5.0.1_9A405.plist \
	Keys/iPad2,3_5.0_9A334.plist \
	Keys/iPhone1,1_1.0.1_1C25.plist \
	Keys/iPhone1,1_1.0.2_1C28.plist \
	Keys/iPhone1,1_1.0_1A543a.plist \
	Keys/iPhone1,1_1.1.1_3A109a.plist \
	Keys/iPhone1,1_1.1.2_3B48b.plist \
	Keys/iPhone1,1_1.1.3_4A93.plist \
	Keys/iPhone1,1_1.1.4_4A102.plist \
	Keys/iPhone1,1_2.0.1_5B108.plist \
	Keys/iPhone1,1_2.0.2_5C1.plist \
	Keys/iPhone1,1_2.0_5A347.plist \
	Keys/iPhone1,1_2.1_5F136.plist \
	Keys/iPhone1,1_2.2.1_5H11.plist \
	Keys/iPhone1,1_2.2_5G77.plist \
	Keys/iPhone1,1_3.0.1_7A400.plist \
	Keys/iPhone1,1_3.0_7A341.plist \
	Keys/iPhone1,1_3.1.2_7D11.plist \
	Keys/iPhone1,1_3.1.3_7E18.plist \
	Keys/iPhone1,1_3.1_7C144.plist \
	Keys/iPhone1,2_2.0.1_5B108.plist \
	Keys/iPhone1,2_2.0.2_5C1.plist \
	Keys/iPhone1,2_2.0_5A347.plist \
	Keys/iPhone1,2_2.1_5F136.plist \
	Keys/iPhone1,2_2.2.1_5H11.plist \
	Keys/iPhone1,2_2.2_5G77.plist \
	Keys/iPhone1,2_3.0.1_7A400.plist \
	Keys/iPhone1,2_3.0_7A341.plist \
	Keys/iPhone1,2_3.1.2_7D11.plist \
	Keys/iPhone1,2_3.1.3_7E18.plist \
	Keys/iPhone1,2_3.1_7C144.plist \
	Keys/iPhone1,2_4.0.1_8A306.plist \
	Keys/iPhone1,2_4.0.2_8A400.plist \
	Keys/iPhone1,2_4.0_8A274b.plist \
	Keys/iPhone1,2_4.0_8A293.plist \
	Keys/iPhone1,2_4.1_8B117.plist \
	Keys/iPhone1,2_4.2.1_8C148.plist \
	Keys/iPhone2,1_3.0.1_7A400.plist \
	Keys/iPhone2,1_3.0_7A341.plist \
	Keys/iPhone2,1_3.1.2_7D11.plist \
	Keys/iPhone2,1_3.1.3_7E18.plist \
	Keys/iPhone2,1_3.1_7C144.plist \
	Keys/iPhone2,1_4.0.1_8A306.plist \
	Keys/iPhone2,1_4.0.2_8A400.plist \
	Keys/iPhone2,1_4.0_8A293.plist \
	Keys/iPhone2,1_4.1_8B117.plist \
	Keys/iPhone2,1_4.2.1_8C148a.plist \
	Keys/iPhone2,1_4.3.1_8G4.plist \
	Keys/iPhone2,1_4.3.2_8H7.plist \
	Keys/iPhone2,1_4.3.3_8J2.plist \
	Keys/iPhone2,1_4.3.4_8K2.plist \
	Keys/iPhone2,1_4.3.5_8L1.plist \
	Keys/iPhone2,1_4.3_8F190.plist \
	Keys/iPhone2,1_4.3_8F5148b.plist \
	Keys/iPhone2,1_4.3_8F5166b.plist \
	Keys/iPhone2,1_5.0.1_9A405.plist \
	Keys/iPhone2,1_5.0_9A334.plist \
	Keys/iPhone2,1_5.0_9A5220p.plist \
	Keys/iPhone3,1_4.0.1_8A306.plist \
	Keys/iPhone3,1_4.0.2_8A400.plist \
	Keys/iPhone3,1_4.0_8A293.plist \
	Keys/iPhone3,1_4.1_8B117.plist \
	Keys/iPhone3,1_4.2.1_8C148.plist \
	Keys/iPhone3,1_4.2_8C134.plist \
	Keys/iPhone3,1_4.2_8C5115c.plist \
	Keys/iPhone3,1_4.3.1_8G4.plist \
	Keys/iPhone3,1_4.3.2_8H7.plist \
	Keys/iPhone3,1_4.3.3_8J2.plist \
	Keys/iPhone3,1_4.3.4_8K2.plist \
	Keys/iPhone3,1_4.3.5_8L1.plist \
	Keys/iPhone3,1_4.3_8F190.plist \
	Keys/iPhone3,1_4.3_8F5148b.plist \
	Keys/iPhone3,1_5.0.1_9A405.plist \
	Keys/iPhone3,1_5.0_9A334.plist \
	Keys/iPhone3,1_5.0_9A5220p.plist \
	Keys/iPhone3,3_4.2.10_8E600.plist \
	Keys/iPhone3,3_4.2.6_8E200.plist \
	Keys/iPhone3,3_4.2.7_8E303.plist \
	Keys/iPhone3,3_4.2.8_8E401.plist \
	Keys/iPhone3,3_4.2.9_8E501.plist \
	Keys/iPhone3,3_5.0.1_9A405.plist \
	Keys/iPhone3,3_5.0_9A334.plist \
	Keys/iPhone4,1_5.0.1_9A405.plist \
	Keys/iPhone4,1_5.0.1_9A406.plist \
	Keys/iPhone4,1_5.0_9A334.plist \
	Keys/iPod1,1_1.1.1_3A110a.plist \
	Keys/iPod1,1_1.1.2_3B48b.plist \
	Keys/iPod1,1_1.1.3_4A93.plist \
	Keys/iPod1,1_1.1.4_4A102.plist \
	Keys/iPod1,1_1.1.5_4B1.plist \
	Keys/iPod1,1_1.1_3A101a.plist \
	Keys/iPod2,1_2.1.1_5F138.plist \
	Keys/iPod2,1_2.2.1_5H11a.plist \
	Keys/iPod2,1_2.2_5G77a.plist \
	Keys/iPod2,1_4.0.2_8A400.plist \
	Keys/iPod2,1_4.0_8A293.plist \
	Keys/iPod2,1_4.1_8B117.plist \
	Keys/iPod2,1_4.2.1_8C148.plist \
	Keys/iPod3,1_3.1.1_7C145.plist \
	Keys/iPod3,1_3.1.1_7C146.plist \
	Keys/iPod3,1_3.1.2_7D11.plist \
	Keys/iPod3,1_3.1.3_7E18.plist \
	Keys/iPod3,1_4.0.2_8A400.plist \
	Keys/iPod3,1_4.0_8A293.plist \
	Keys/iPod3,1_4.1_8B117.plist \
	Keys/iPod3,1_4.2.1_8C148.plist \
	Keys/iPod3,1_4.3.1_8G4.plist \
	Keys/iPod3,1_4.3.2_8H7.plist \
	Keys/iPod3,1_4.3.3_8J2.plist \
	Keys/iPod3,1_4.3.4_8K2.plist \
	Keys/iPod3,1_4.3.5_8L1.plist \
	Keys/iPod3,1_4.3_8F190.plist \
	Keys/iPod3,1_5.0.1_9A405.plist \
	Keys/iPod3,1_5.0_9A334.plist \
	Keys/iPod4,1_4.1_8B117.plist \
	Keys/iPod4,1_4.1_8B118.plist \
	Keys/iPod4,1_4.2.1_8C148.plist \
	Keys/iPod4,1_4.3.1_8G4.plist \
	Keys/iPod4,1_4.3.2_8H7.plist \
	Keys/iPod4,1_4.3.3_8J2.plist \
	Keys/iPod4,1_4.3.4_8K2.plist \
	Keys/iPod4,1_4.3.5_8L1.plist \
	Keys/iPod4,1_4.3_8F190.plist \
	Keys/iPod4,1_5.0.1_9A405.plist \
	Keys/iPod4,1_5.0_9A334.plist

