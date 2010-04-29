/* Copyright (c) 1993, 1996, Oracle and/or its affiliates. All rights reserved.
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


/*
 *  rtn_grab.h DGA Retained Window Grabber Definitions
 *
 */

#ifndef	_RTN_GRAB_H
#define	_RTN_GRAB_H

/*
 *  Internal DGA Retained Window Macros
 */

#define RTN_INFOP(clientp) ((SHARED_RETAINED_INFO *) ((clientp)->rtn_info))

/*
 * DGA Retained Window Functions 
 */

extern int	_dga_rtn_map();
extern int	_dga_rtn_unmap();
#ifdef DEBUG
extern void	_dga_rtn_dump();
#endif

#endif /* _RTN_GRAB_H */
