###############################################################################
#
# xf86-video-vmware Makefile
#
# Copyright (c) 2006, 2012, Oracle and/or its affiliates. All rights reserved.
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
MODULE_NAME=xf86-video-vmware

# Version number (used in path names)
MODULE_VERSION=12.0.2

# Checksums for upstream tarball
TARBALL_MD5   = 0743ec7c479603fba60d118858fd5783
TARBALL_SHA1  = efa47f365d88da245804a9934719ff860ed04f95
TARBALL_SHA256= c827875fd94805ec9b925fe09aaa973e7e3f9096c7ef311d449c3f134ae75147

# Patches to apply to source after unpacking, in order
SOURCE_PATCHES =

# Man pages to apply Sun footer to & attributes to list
SUNTOUCHED_MANPAGES=man/*.man
MODULE_STABILITY=Volatile

# vmwarevideo code won't build with Sun compiler
MODULE_COMPILER=gcc
MODULE_COMPILER_SET=yes

# Libraries/modules to link with
MODULE_LD_OPTIONS= \
	-L$(PROTODIR)$(X11_SERVERMODS_DIR) \
	-L$(PROTODIR)$(X11_SERVERLIBS_DIR)$(ARCHLIBSUBDIR) \
	-R$(X11_SERVERMODS_DIR) \
	-R$(X11_SERVERLIBS_DIR)$(ARCHLIBSUBDIR) \
	-lfb -lpixman-1 -lshadowfb -lXfont -lvgahw -lpciaccess

include ../Makefile.inc
