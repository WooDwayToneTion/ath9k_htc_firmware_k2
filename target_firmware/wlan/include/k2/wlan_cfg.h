/*
 * Copyright (c) 2013 Qualcomm Atheros, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted (subject to the limitations in the
 * disclaimer below) provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *  * Neither the name of Qualcomm Atheros nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
 * GRANTED BY THIS LICENSE.  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
 * HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef _WLAN_CFG_H_
#define _WLAN_CFG_H_

/************************** ATH configurations **************************/
#ifdef _DEBUG_BUILD_
#ifdef RX_SCATTER
#define ATH_RXDESC  30     /* number of RX descriptors */
#endif

#ifdef RX_SCATTER
#define ATH_RXBUF   ATH_RXDESC      /* number of RX buffers */
#else
#define ATH_RXBUF   15              /* number of RX buffers */
#endif
#define ATH_TXBUF   26              /* number of TX buffers */

#else

#ifdef RX_SCATTER
#define ATH_RXDESC  11     /* number of RX descriptors */
#endif   // end of _DEBUG_BUILD

#ifdef RX_SCATTER
#define ATH_RXBUF   ATH_RXDESC      /* number of RX buffers */
#else
#define ATH_RXBUF   15              /* number of RX buffers */
#endif
#define ATH_TXBUF   30              /* number of TX buffers */
#endif

#ifdef FUSION_USB_FW
#undef ATH_RXBUF
#undef ATH_TXBUF

#define ATH_RXBUF  11
#define ATH_TXBUF  33
#endif

#define ATH_BCBUF   1               /* number of beacon buffers */
#define ATH_WMI_MAX_CMD_REPLY   2
#define ATH_WMI_MAX_EVENTS      8

//#define ATH_DISABLE_RC              /* Use fixed rate instead of rate control */
#define ATH_BUF_OPTIMIZATION
#define ATH_NO_VIRTUAL_MEMORY
#define ATH_SUPPORT_XB_ONLY
#define ATH_ENABLE_WLAN_FOR_K2

#define ATH_VERSION_MAJOR 1
#define ATH_VERSION_MINOR 4

/************************** HAL configurations **************************/

#define HAL_DESC_OPTIMIZATION

#endif /* _WLAN_CFG_H_ */
