###############################################################################
#
# libXau - library for manipulating .Xauthority files
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
MODULE_NAME=libXau

# Version number (used in path names)
MODULE_VERSION=1.0.7

# Checksums for upstream tarball
TARBALL_MD5   = 2d241521df40d27034413436d1a1465c
TARBALL_SHA1  = 29c47207fd246425b906f525b2220235ce4cd0f6
TARBALL_SHA256= 7153ba503e2362d552612d9dc2e7d7ad3106d5055e310a26ecf28addf471a489

# Patches to apply to source after unpacking, in order
SOURCE_PATCHES = 

# Library name (used for specfiles/mapfiles)
LIBNAME=Xau

# Man pages to apply Sun footer to & attributes to list
SUNTOUCHED_MANPAGES=man/Xau.man
MODULE_STABILITY=Committed
MODULE_MTLEVEL=Unsafe
MODULE_MTLEVEL_SET=yes
LIB_MAN_SUFFIX=3xau

# Command line options to GNU autoconf configure script
MODULE_CONFIG_OPTS = --enable-xthreads --with-lint --enable-lint-library

# Link with version mapfile
MODULE_LD_OPTIONS = -M $(PWD)/mapfile-vers

# pkg-config files that need to have -R added
FIX_PC_FILES=xau.pc.in

# Compatibility links from /usr/X11/lib to /usr/lib
MODULE_X11_LIBCOMPAT_LINKS = libXau.so libXau.so.6

include ../Makefile.inc
