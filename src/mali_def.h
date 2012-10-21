/*
 * Copyright (C) 2010 ARM Limited. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _MALI_DEF_H_
#define _MALI_DEF_H_

#define MALI_DEBUG  1

#if MALI_DEBUG
#define TRACE_ENTER()    xf86DrvMsg(pScrn->scrnIndex, X_INFO, "%s: ENTER\n", __FUNCTION__)
#define TRACE_EXIT()     xf86DrvMsg(pScrn->scrnIndex, X_INFO, "%s: EXIT\n", __FUNCTION__)
#define PRINT_STR(str)   xf86DrvMsg(pScrn->scrnIndex, X_INFO, "%s\n", str)
#define ERROR_STR(str)   ErrorF("%s\n", str)
#else
#define TRACE_ENTER()
#define TRACE_EXIT()
#define PRINT_STR(str)
#define ERROR_STR(str)
#endif

#define IGNORE( a )  ( a = a );

#endif
