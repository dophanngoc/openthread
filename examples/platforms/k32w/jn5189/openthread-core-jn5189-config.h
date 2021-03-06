/*
 *  Copyright (c) 2019, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes jn5189 compile-time configuration constants
 *   for OpenThread.
 */

#ifndef OPENTHREAD_CORE_JN5189_CONFIG_H_
#define OPENTHREAD_CORE_JN5189_CONFIG_H_

/**
 * @def OPENTHREAD_CONFIG_LOG_OUTPUT
 *
 * The emsk platform provides an otPlatLog() function.
 */
#ifndef OPENTHREAD_CONFIG_LOG_OUTPUT /* allow command line override */
#define OPENTHREAD_CONFIG_LOG_OUTPUT OPENTHREAD_CONFIG_LOG_OUTPUT_PLATFORM_DEFINED
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_INFO
 *
 * The platform-specific string to insert into the OpenThread version string.
 *
 */
#define OPENTHREAD_CONFIG_PLATFORM_INFO "JN5189"

/**
 * @def SETTINGS_CONFIG_BASE_ADDRESS
 *
 * The base address of settings.
 *
 */
#define SETTINGS_CONFIG_BASE_ADDRESS 0

/**
 * @def SETTINGS_CONFIG_PAGE_SIZE
 *
 * The page size of settings.
 *
 */
#define SETTINGS_CONFIG_PAGE_SIZE 0x200

/**
 * @def SETTINGS_CONFIG_PAGE_NUM
 *
 * The page number of settings.
 *
 */

#define SETTINGS_CONFIG_PAGE_NUM 64

/**
 * @def RADIO_CONFIG_SRC_MATCH_ENTRY_NUM
 *
 * The number of source address table entries.
 *
 */
#define RADIO_CONFIG_SRC_MATCH_ENTRY_NUM 128

/**
 * @def OPENTHREAD_CONFIG_ENABLE_SOFTWARE_RETRANSMIT
 *
 * Define to 1 if you want to enable software retransmission logic.
 *
 */
/* TODO */

/**
 * @def OPENTHREAD_CONFIG_ENABLE_SOFTWARE_CSMA_BACKOFF
 *
 * Define to 1 if you want to enable software CSMA-CA backoff logic.
 *
 */
/* TODO */

/**
 * @def OPENTHREAD_CONFIG_NCP_UART_ENABLE
 *
 * Define to 1 to enable NCP UART support.
 *
 */
#define OPENTHREAD_CONFIG_NCP_UART_ENABLE 1

/**
 * @def OPENTHREAD_SETTINGS_RAM
 *
 * Define to 1 if you want to use JN589 Flash implementation.
 *
 */
#define OPENTHREAD_SETTINGS_RAM 1

/**
 * @def OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE
 *
 * The size of NCP message buffer in bytes.
 *
 */
#define OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE 1024

/**
 * @def OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE
 *
 * The size of heap buffer when DTLS is enabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE
#define OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE (2048 * sizeof(void *))
#endif

/**
 * @def OPENTHREAD_CONFIG_COAP_API_ENABLE
 *
 * Define to 1 to enable the CoAP API.
 *
 */
#define OPENTHREAD_CONFIG_COAP_API_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_JOINER_ENABLE
 *
 * Define to 1 to enable Joiner support.
 *
 */
#define OPENTHREAD_CONFIG_JOINER_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_COMMISSIONER_ENABLE
 *
 * Define to 1 to enable Commissioner support.
 *
 */
#define OPENTHREAD_CONFIG_COMMISSIONER_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE
 *
 * Define to 1 to enable UDP forward support.
 *
 */
#define OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE
 *
 * Define to 1 to enable the Border Router service.
 *
 */
#define OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE
 *
 * Define to 1 to enable the DHCP CLIENT service.
 *
 */
#define OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE
 *
 * Define to 1 to enable the DHCP SERVER service.
 *
 */
#define OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE 1

/**
 * @def OPENTHREAD_CONFIG_TIME_SYNC_ENABLE
 *
 * Define as 1 to enable the time synchronization service feature.
 *
 */
#ifndef OPENTHREAD_CONFIG_TIME_SYNC_ENABLE
#define OPENTHREAD_CONFIG_TIME_SYNC_ENABLE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_DIAG_ENABLE
 *
 * Define as 1 to enable the diag feature.
 *
 */
#ifndef OPENTHREAD_CONFIG_DIAG_ENABLE
#define OPENTHREAD_CONFIG_DIAG_ENABLE 0
#endif

#endif // OPENTHREAD_CORE_JN5189_CONFIG_H_
