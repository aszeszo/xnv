###############################################################################
#
# xf86-video-nv Makefile
#
# Copyright (c) 2006, 2011, Oracle and/or its affiliates. All rights reserved.
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
MODULE_NAME=xf86-video-nv

# Version number (used in path names)
MODULE_VERSION=2.1.18

# Checksums for upstream tarball
TARBALL_MD5  = b12f0b2114849d1a542d8084732573d3
TARBALL_SHA1 = d35b2fa5a26a507a9cc95b69243d9fd0c0f32aa2

# Patches to apply to source after unpacking, in order
SOURCE_PATCHES = 7163065.patch

# Man pages to apply Sun footer to & attributes to list
SUNTOUCHED_MANPAGES=man/*.man
MODULE_STABILITY=Volatile

# Regenerate configure after patching configure.ac
AUTORECONF=yes

# Libraries/modules to link with
MODULE_LD_OPTIONS= \
	-L$(PROTODIR)$(X11_SERVERMODS_DIR) \
        -L$(PROTODIR)$(X11_SERVERLIBS_DIR)$(ARCHLIBSUBDIR) \
	-R$(X11_SERVERMODS_DIR) \
        -R$(X11_SERVERLIBS_DIR)$(ARCHLIBSUBDIR) \
	-lexa -lfb -lint10 -lshadowfb -lXfont -lvbe -lvgahw -lxaa -lfbdevhw \
	-L$(PROTODIR)/usr/lib -lpciaccess -lpixman-1 -lm

include ../Makefile.inc

