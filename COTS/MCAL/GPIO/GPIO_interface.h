/**
 * @file GPIO_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the interface information regarding the GPIO peripheral
 * @version 1.0
 * @date 2023-01-24
 * @copyright Copyright (c) 2023
 */
#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"

/************************************************************************/
/*                          Interfacing macros                          */
/************************************************************************/

/**
 * @defgroup gpio_ports GPIO Ports
 * @{
 */

/**
 * @typedef PORTA
 * GPIO Port A
 */
#define PORTA (0)

/**
 * @typedef PORTB
 * GPIO Port B
 */
#define PORTB (1)

/**
 * @typedef PORTC
 * GPIO Port C
 */
#define PORTC (2)

/**
 * @typedef PORTD
 * GPIO Port D
 */
#define PORTD (3)

/** @} */

/**
 * @brief Set a certain pin with a certain direction whether INPUT or OUTPUT
 *
 * @param L_u8Port
 * @param L_u8Pin
 * @param L_u8Direction
 */
void MGPIO_vSetPinDirection(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8Direction);
void MGPIO_vSetPinValue(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8PinValue);
u8_t MGPIO_vGetPinValue(u8_t L_u8Port, u8_t L_u8Pin);

#endif // _GPIO_INTERFACE_H_
