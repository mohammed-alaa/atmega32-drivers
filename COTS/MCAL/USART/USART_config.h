/**
 * @file USART_config.h
 * @author Mohamed Alaa
 * @brief This file contains the configuration information of the USART driver
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

#ifndef USART_CONFIG_H_
#define USART_CONFIG_H_

#include "USART_interface.h"

/**
 * @defgroup usart_configurations USART Configurations
 * @brief This group contains the configurations for the USART driver
 * @{
 */

/**
 * @def USART_BAUDRATE
 * @brief This macro is used to set the baudrate of the USART
 * @see usart_baudrates_single_speed
 * @see usart_baudrates_double_speed 
 */
#define USART_BAUDRATE (USART_BAUDRATE_SINGLE_SPEED_9600)

/**
 * @def USART_OPERATION_MODE
 * @brief This macro is used to set the operation mode of the USART
 * @see usart_operation_modes
 */
#define USART_OPERATION_MODE (USART_OPERATION_MODE_ASYNC)

/**
 * @def USART_PARITY
 * @brief This macro is used to set the parity mode of the USART
 * @see usart_parity_modes
 */
#define USART_PARITY (USART_PARITY_DISABLED)

/**
 * @def USART_STOP_BITS
 * @brief This macro is used to set the number of stop bits of the USART
 * @see usart_stop_bits
 */
#define USART_STOP_BITS (USART_STOP_BITS_1)

/**
 * @def USART_CHARACTER_SIZE
 * @brief This macro is used to set the character size of the USART
 * @see usart_character_size
 */
#define USART_CHARACTER_SIZE (USART_CHARACTER_SIZE_8)

/**
 * @def USART_CLOCK_POLARITY
 * @brief This macro is used to set the clock polarity of the USART
 * @see usart_clock_polarity
 */
#define USART_CLOCK_POLARITY (USART_CLOCK_POLARITY_RISING_FALLING)

/**
 * @def USART_SPEED
 * @brief This macro is used to set the speed of the USART
 * @see usart_speed
 */
#define USART_SPEED (USART_SPEED_SINGLE)

/**
 * @def USART_MULTI_PROCESSOR
 * @brief This macro is used to set the multi processor mode of the USART
 * @see usart_multi_processor
 */
#define USART_MULTI_PROCESSOR (USART_MULTI_PROCESSOR_DISABLED)

/** @} */

#endif // USART_CONFIG_H_