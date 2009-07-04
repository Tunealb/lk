/*
 * Copyright (c) 2008 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef __ERR_H
#define __ERR_H

#define NO_ERROR 0
#define ERROR -1
#define ERR_GENERAL -1
#define ERR_NOT_FOUND -2
#define ERR_NOT_READY -3
#define ERR_NO_MSG -4
#define ERR_NO_MEMORY -5
#define ERR_ALREADY_STARTED -6
#define ERR_NOT_VALID -7
#define ERR_INVALID_ARGS -8
#define ERR_NOT_ENOUGH_BUFFER -9
#define ERR_NOT_SUSPENDED -10
#define ERR_OBJECT_DESTROYED -11
#define ERR_NOT_BLOCKED -12
#define ERR_TIMED_OUT -13
#define ERR_NOT_ALLOWED -14
#define ERR_INVALID_HANDLE -15

#define ERR_NET_FAILED_ARP -1000
#define ERR_NET_ARP_QUEUED -1001
#define ERR_NET_NO_ROUTE -1002
#define ERR_NET_BAD_PACKET -1003
#define ERR_NET_SOCKET_ALREADY_BOUND -1004
#define ERR_NET_REMOTE_CLOSE -1005
#define ERR_NET_ALREADY_CONNECTED -1006
#define ERR_NET_CONNECTION_REFUSED -1007
#define ERR_NET_NOT_LISTENING -1008
#define ERR_NET_NOT_CONNECTED -1009

#endif
