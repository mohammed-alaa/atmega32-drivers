/**
 * @file GPIO_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information regarding the GPIO peripheral
 * @version 1.0
 * @date 2023-01-24
 * @copyright Copyright (c) 2023
 */

#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/************************************************************************/
/*                          Interfacing macros                          */
/************************************************************************/

/**
 * @defgroup port_a_registers Port A Registers
 * @{
 */

/**
 * @def PORTA
 * @brief Port A Data Register
 */
#define PORTA REGISTER_U8(0x3B)

/**
 * @def DDRA
 * @brief Port A Data Direction Register
 */
#define DDRA REGISTER_U8(0x3A)

/**
 * @def PINA
 * @brief Port A Input Pins Address
 */
#define PINA REGISTER_U8(0x39)

/** @} */

/**
 * @defgroup port_b_registers Port B Registers
 * @{
 */

/**
 * @def PORTB
 * @brief Port B Data Register
 */
#define PORTB REGISTER_U8(0x38)

/**
 * @def DDRB
 * @brief Port B Data Direction Register
 */
#define DDRB REGISTER_U8(0x37)

/**
 * @def PINB
 * @brief Port B Input Pins Address
 */
#define PINB REGISTER_U8(0x36)

/** @} */

/**
 * @defgroup port_c_registers Port C Registers
 * @{
 */

/**
 * @def PORTC
 * @brief Port C Data Register
 */
#define PORTC REGISTER_U8(0x35)

/**
 * @def DDRC
 * @brief Port C Data Direction Register
 */
#define DDRC REGISTER_U8(0x34)

/**
 * @def PINC
 * @brief Port C Input Pins Address
 */
#define PINC REGISTER_U8(0x33)

/** @} */

/**
 * @defgroup port_d_registers Port D Registers
 * @{
 */

/**
 * @def PORTD
 * @brief Port D Data Register
 */
#define PORTD REGISTER_U8(0x32)

/**
 * @def DDRD
 * @brief Port D Data Direction Register
 */
#define DDRD REGISTER_U8(0x31)

/**
 * @def PIND
 * @brief Port D Input Pins Address
 */
#define PIND REGISTER_U8(0x30)

/** @} */

#endif // _GPIO_PRIVATE_H_