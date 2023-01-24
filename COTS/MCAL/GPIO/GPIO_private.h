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
 * @typedef PORTA
 * Port A Data Register
 */
#define PORTA REGISTER(0x3B)

/**
 * @typedef DDRA
 * Port A Data Direction Register
 */
#define DDRA REGISTER(0x3A)

/**
 * @typedef PINA
 * Port A Input Pins Address
 */
#define PINA REGISTER(0x39)

/** @} */

/**
 * @defgroup port_b_registers Port B Registers
 * @{
 */

/**
 * @typedef PORTB
 * Port B Data Register
 */
#define PORTB REGISTER(0x38)

/**
 * @typedef DDRB
 * Port B Data Direction Register
 */
#define DDRB REGISTER(0x37)

/**
 * @typedef PINB
 * Port B Input Pins Address
 */
#define PINB REGISTER(0x36)

/** @} */

/**
 * @defgroup port_c_registers Port C Registers
 * @{
 */

/**
 * @typedef PORTC
 * Port C Data Register
 */
#define PORTC REGISTER(0x35)

/**
 * @typedef DDRC
 * Port C Data Direction Register
 */
#define DDRC REGISTER(0x34)

/**
 * @typedef PINC
 * Port C Input Pins Address
 */
#define PINC REGISTER(0x33)

/** @} */

/**
 * @defgroup port_d_registers Port D Registers
 * @{
 */

/**
 * @typedef PORTD
 * Port D Data Register
 */
#define PORTD REGISTER(0x32)

/**
 * @typedef DDRD
 * Port D Data Direction Register
 */
#define DDRD REGISTER(0x31)

/**
 * @typedef PIND
 * Port D Input Pins Address
 */
#define PIND REGISTER(0x30)

/** @} */

#endif // _GPIO_PRIVATE_H_