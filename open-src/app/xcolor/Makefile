###############################################################################
#
# xcolor 1.x Makefile
#
# Copyright 2008 Sun Microsystems, Inc.  All rights reserved.
# Use subject to license terms.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, and/or sell copies of the Software, and to permit persons
# to whom the Software is furnished to do so, provided that the above
# copyright notice(s) and this permission notice appear in all copies of
# the Software and that both the above copyright notice(s) and this
# permission notice appear in supporting documentation.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT
# OF THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
# HOLDERS INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL
# INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING
# FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
# NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
# WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
# 
# Except as contained in this notice, the name of a copyright holder
# shall not be used in advertising or otherwise to promote the sale, use
# or other dealings in this Software without prior written authorization
# of the copyright holder.
#
# @(#)Makefile	1.3	08/08/08
#

# Package name used in tarballs
MODULE_NAME=xcolor

# No upstream sources for these files, since they're Solaris-specific
MODULE_VERSION=src
SOURCE_TARBALL_NAME=NONE
SOURCE_TARBALL_NAME_SET=yes
ADDITIONAL_SOURCE_DIR=sun-src

# Patches to apply to source after unpacking, in order
SOURCE_PATCHES = 

# No configure script, so pass usual environment to build/install instead
CONFIGURE_TARGETS=
CONFIGURE_TARGETS_SET=yes

MODULE_BUILD_ENV=$(CONFIG_ENV)

# Man pages to apply Sun footer to & attributes to list
SUNTOUCHED_MANPAGES=# None
SUN_PACKAGE=SUNWxwopt
MODULE_STABILITY=Committed

include ../Makefile.inc
install_gen::install_man
install_man:
	cp -f sun-src/xcolor.1 $(PROTODIR)/usr/X11/share/man/man1/xcolor.1