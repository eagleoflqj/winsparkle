/*
 *  This file is part of WinSparkle (http://winsparkle.org)
 *
 *  Copyright (C) 2009 Vaclav Slavik
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _winsparkle_version_h_
#define _winsparkle_version_h_

/*--------------------------------------------------------------------------*
                         Version information
 *--------------------------------------------------------------------------*/

#define WIN_SPARKLE_VERSION_MAJOR   0
#define WIN_SPARKLE_VERSION_MINOR   1
#define WIN_SPARKLE_VERSION_MICRO   0

/**
    Checks if WinSparkle version is at least @a major.@a minor.@a micro.
 */
#define WIN_SPARKLE_CHECK_VERSION(major, minor, micro)           \
        (                                                        \
            WIN_SPARKLE_VERSION_MAJOR > (major)                  \
            ||                                                   \
            (WIN_SPARKLE_VERSION_MAJOR == (major) &&             \
             WIN_SPARKLE_VERSION_MINOR >= (minor))               \
            ||                                                   \
            (WIN_SPARKLE_VERSION_MAJOR == (major) &&             \
            (WIN_SPARKLE_VERSION_MINOR == (minor) &&             \
             WIN_SPARKLE_VERSION_MICRO >= (micro))               \
        )

#endif // _winsparkle_version_h_