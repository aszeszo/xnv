/* Copyright 2008 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */ 

/************************************************************
	Boiler plate defs for XIA extension.
********************************************************/

/* THIS IS NOT AN X CONSORTIUM STANDARD */

#ifndef _XINTERACTIVE_H_
#define _XINTERACTIVE_H_


#include <X11/Xmd.h>
#include <X11/Xfuncproto.h>

#include <X11/extensions/interactiveCommon.h>

_XFUNCPROTOBEGIN

/* -------------------- Public Functions Prototypes ------------------- */

Bool XSolarisIAQueryVersion(
    Display *,		/* dpy */
    int *,		/* majorVersion */
    int *		/* minorVersion */
);

Bool XSolarisIASetProcessInfo(
    Display *,	 	/* dpy */
    unsigned char *,	/* request specific */
    CARD32,		/* flags */
    CARD32		/* count */
);

Bool XSolarisIAGetProcessInfo(
    Display *,	 	/* dpy */
    unsigned char **,	/* request specific */
    CARD32,		/* flags */
    int *		/* count */
);

_XFUNCPROTOEND

#endif	/* _XINTERACTIVE_H_ */
