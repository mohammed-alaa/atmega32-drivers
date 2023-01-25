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
 * @def GPIO_PORTA
 * @brief GPIO Port A
 */
#define GPIO_PORTA (0)

/**
 * @def GPIO_PORTB
 * @brief GPIO Port B
 */
#define GPIO_PORTB (1)

/**
 * @def GPIO_PORTC
 * @brief GPIO Port C
 */
#define GPIO_PORTC (2)

/**
 * @def GPIO_PORTD
 * @brief GPIO Port D
 */
#define GPIO_PORTD (3)

/** @} */

/**
 * @defgroup gpio_pins GPIO Pins
 * @{
 */

/**
 * @def GPIO_PIN0
 * @brief GPIO Pin 0
 */
#define GPIO_PIN0 (0)

/**
 * @def GPIO_PIN1
 * @brief GPIO Pin 1
 */
#define GPIO_PIN1 (1)

/**
 * @def GPIO_PIN2
 * @brief GPIO Pin 2
 */
#define GPIO_PIN2 (2)

/**
 * @def GPIO_PIN3
 * @brief GPIO Pin 3
 */
#define GPIO_PIN3 (3)

/**
 * @def GPIO_PIN4
 * @brief GPIO Pin 4
 */
#define GPIO_PIN4 (4)

/**
 * @def GPIO_PIN5
 * @brief GPIO Pin 5
 */
#define GPIO_PIN5 (5)

/**
 * @def GPIO_PIN6
 * @brief GPIO Pin 6
 */
#define GPIO_PIN6 (6)

/**
 * @def GPIO_PIN7
 * @brief GPIO Pin 7
 */
#define GPIO_PIN7 (7)

/** @} */

/**
 * @defgroup gpio_directions GPIO Directions
 * @{
 */

/**
 * @def INPUT_PULLDOWN
 * @brief GPIO input direction with pull-down resistor
 */
#define INPUT_PULLDOWN (0)

/**
 * @def INPUT_PULLUP
 * @brief GPIO input direction with pull-up resistor
 */
#define INPUT_PULLUP (1)

/**
 * @def OUTPUT
 * @brief GPIO output direction
 */
#define OUTPUT (2)

/** @} */

/**
 * @defgroup gpio_values GPIO Values
 * @{
 */

/**
 * @def LOW
 * @brief GPIO low values to be applied on a certain pin
 */
#define LOW (0)

/**
 * @def HIGH
 * @brief GPIO high values to be applied on a certain pin
 */
#define HIGH (1)

/** @} */

/**
 * @brief Apply a certain direction on a certain pin
 *
 * @param[in] L_u8Port The port that the pin belongs to, @see gpio_ports
 * @param[in] L_u8Pin The pin to update its direction, @see gpio_pins
 * @param[in] L_u8Direction The direction to apply on the pin, @see gpio_directions
 */
void MGPIO_vSetPinDirection(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8Direction);

/**
 * @brief Apply a certain value on a certain pin
 *
 * @param[in] L_u8Port The port that the pin belongs to, @see gpio_ports
 * @param[in] L_u8Pin The pin to update its value, @see gpio_pins
 * @param[in] L_u8PinValue The value to apply on the pin, @see gpio_values
 */
void MGPIO_vSetPinValue(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8PinValue);

/**
 * @brief Retrieve the current applied value on a certain pin
 *
 * @param[in] L_u8Port The port that the pin belongs to, @see gpio_ports
 * @param[in] L_u8Pin The pin to retrieve its current value, @see gpio_pins
 * @return Returns the current value applied on a certain pin
 */
u8_t MGPIO_vGetPinValue(u8_t L_u8Port, u8_t L_u8Pin);

#endif // _GPIO_INTERFACE_H_
