/**
 * @file USART_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information of the USART driver
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/**
 * @defgroup usart_registers USART Registers
 * @brief This section contains the USART Registers
 * @{
 */

/**
 * @def UDR
 * @brief USART I/O Data Register (UDR)
 */
#define UDR REGISTER_U8(0x2C)

/**
 * @def UCSRA
 * @brief USART Control and Status Register A (UCSRA)
 */
#define UCSRA REGISTER_U8(0x2B)

/**
 * @def UCSRB
 * @brief USART Control and Status Register B (UCSRB)
 */
#define UCSRB REGISTER_U8(0x2A)

/**
 * @def UCSRC
 * @brief USART Control and Status Register C (UCSRC)
 */
#define UCSRC REGISTER_U8(0x40)

/**
 * @def UBRRH
 * @brief USART Baud Rate Register High (UBRRH)
 */
#define UBRRH REGISTER_U8(0x40)

/**
 * @def UBRRL
 * @brief USART Baud Rate Register Low (UBRRL)
 */
#define UBRRL REGISTER_U8(0x29)

/** @} */

/**
 * @defgroup usart_ucsra_bits USART UCSRA Bits
 * @brief This section contains the USART UCSRA Bits
 * @{
 */

/**
 * @def UDRE
 * @brief USART Data Register Empty (UDRE)
 */
#define UDRE (5)

/**
 * @def TXC
 * @brief USART Transmit Complete (TXC)
 */
#define TXC (6)

/**
 * @def RXC
 * @brief USART Receive Complete (RXC)
 */
#define RXC (7)

/** @} */

/**
 * @defgroup usart_ucsrb_bits USART UCSRB Bits
 * @brief This section contains the USART UCSRB Bits
 * @{
 */

/**
 * @def TXB8
 * @brief USART Transmit Data Bit 8 (TXB8)
 */
#define TXB8 (0)

/**
 * @def RXB8
 * @brief USART Receive Data Bit 8 (RXB8)
 */
#define RXB8 (1)

/**
 * @def UCSZ2
 * @brief USART Character Size (UCSZ2)
 */
#define UCSZ2 (2)

/** @} */

#endif // USART_PRIVATE_H_