###############################################################################
#
# libdpstk Makefile
#
# Copyright (c) 2009, Oracle and/or its affiliates. All rights reserved.
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

# Manual conversion of the X11R6.9 xc/lib/psres/Imakefile


  REQUIREDLIBS = -lc
    ALLOC_DEFS = -DMALLOC_0_RETURNS_NULL
       DEFINES = -DXENVIRONMENT $(ALLOC_DEFS)

SRCS = PSres.c

OBJS = PSres.o

      CPPFLAGS += $(DEFINES) -I ../include $(INCLUDES)
        CFLAGS += -Kpic
        MAPFILE = mapfile
   SHLIBLDFLAGS = -G -z defs $(LDFLAGS) -M $(MAPFILE) -R $(libdir)

# Inspired by automake 1.11 silent rules - hides details by default
# Run make V=1 to show details
DEFAULT_V  = 0
V_CC       = $(V_CC_$(V))
V_CC_      = $(V_CC_$(DEFAULT_V))
V_CC_0     = @echo "  CC    " $@;

all:: libpsres.so.5 libpsres.so

libpsres.so.5: $(OBJS) $(MAPFILE)
	 $(V_CC)$(CC)$(CDEBUGFLAGS) -o $@ -h $@ $(SHLIBLDFLAGS) $(OBJS) $(REQUIREDLIBS)

libpsres.so: libpsres.so.5
	-${RM} libpsres.so
	ln -s libpsres.so.5 libpsres.so

.c.o:
	$(V_CC)$(CC) $(CFLAGS) $(CPPFLAGS) -c $(OUTPUT_OPTION) $<

install: all
	$(INSTALL) libpsres.so.5 $(DESTDIR)$(libdir)/libpsres.so.5
