###############################################################################
#
# xf86-input-synaptics Makefile
#
# Copyright (c) 2009, 2012, Oracle and/or its affiliates. All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice (including the next
# paragraph) shall be included in all copies or substantial portions of the
# Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#
#

# Package name used in tarballs
MODULE_NAME=xf86-input-synaptics

# Version number (used in path names)
MODULE_VERSION=1.6.2

# Checksums for upstream tarball
TARBALL_MD5   = 9914022a173e3f0ccfe7137ab84f6133
TARBALL_SHA1  = 6e59871c0cb683a1fa84731db73a662727a76976
TARBALL_SHA256= c3f7d6a085d480c352f030aeb43db2e5560d1468ed34be24d44a0fc3fda25920

# Patches to apply to source after unpacking, in order
SOURCE_PATCHES= libraries.patch,-p1

# Man pages to apply Sun footer to & attributes to list
SUNTOUCHED_MANPAGES=man/*.man
MODULE_STABILITY=Volatile

# Extra flags to pass to configure script
MODULE_CONFIG_OPTS= --bindir=$(X11_SERVERLIBS_DIR)

# Extra flags to link driver, but not utility programs with
DRIVER_LD_FLAGS = $(DEFAULT_MODTYPE_LD_OPTIONS) -lm
MODULE_CONFIG_OPTS += XORG_LIBS="$(DRIVER_LD_FLAGS)"
USE_DEFAULT_MODTYPE_LD_OPTIONS = no

# Override linker flags for programs
SYN_PROG_LDFLAGS=$(MAPFILES_FOR_PROGS)
PROGRAM_VARS = synclient syndaemon
PROGRAM_MAKEFLAGS = $(PROGRAM_VARS:%=%_LDADD="$(SYN_PROG_LDFLAGS)")
MODULE_BUILD_MAKEFLAGS = AM_MAKEFLAGS='$(PROGRAM_MAKEFLAGS)'

# Extra install rules
MODULE_ADD_INSTALL_TARGETS = install_fdi

# Fix path for installing headers in proto area
MODULE_INSTALL_MAKEFLAGS = sdkdir='$(XORG_SDK_INCLUDES_DIR)'

# Regenerate configure after patching configure.ac
AUTORECONF=yes

# Install xorg-synaptics.pc to /usr/share since it defines the architecture
# independent header files in /usr/include and not any library flags
MODULE_PKGCONFIG_DIR=$(PKGCONFIG_DIR_SHARE)
MODULE_PKGCONFIG_DIR_SET=yes

include ../Makefile.inc

FDI_DIR=$(PROTODIR)/etc/hal/fdi/policy/10osvendor

$(FDI_DIR):
	mkdir -p $(FDI_DIR)

install_fdi: $(SOURCE_TARGETS) $(FDI_DIR)
	$(INSTALL_SCRIPT) -m 0444 $(SOURCE_DIR)/conf/11-x11-synaptics.fdi \
		$(FDI_DIR)/
