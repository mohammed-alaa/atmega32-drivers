/**
 * @file TIMER_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the public information of the Timer driver
 * @version 1.0
 * @date 2023-01-29
 * @copyright Copyright (c) 2023
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_COMPILER.h"

/**
 * @defgroup timer_modes Timer Modes
 * @brief This section contains the Timer Modes
 * @{
 */

/**
 * @def TIMER_MODE_NORMAL
 * @brief Normal Mode (Overflow)
 */
#define TIMER_MODE_NORMAL (0)

/**
 * @def TIMER_MODE_CTC
 * @brief Clear Timer on Compare Match Mode (CTC)
 */
#define TIMER_MODE_CTC (0x08)

/**
 * @def TIMER_MODE_PWM
 * @brief Pulse Width Modulation Mode (Phase Correct)
 */
#define TIMER_MODE_PWM (0x40)

/** @} */

/**
 * @defgroup timer_prescaler Timer Prescaler
 * @brief This section contains the Timer Prescaler
 * @{
 */

/**
 * @def TIMER_PRESCALER_1
 * @brief Prescaler = 1
 */
#define TIMER_PRESCALER_1 (0x01)

/**
 * @def TIMER_PRESCALER_8
 * @brief Prescaler = 8
 */
#define TIMER_PRESCALER_8 (0x02)

/**
 * @def TIMER_PRESCALER_64
 * @brief Prescaler = 64
 */
#define TIMER_PRESCALER_64 (0x03)

/**
 * @def TIMER_PRESCALER_256
 * @brief Prescaler = 256
 */
#define TIMER_PRESCALER_256 (0x04)

/**
 * @def TIMER_PRESCALER_1024
 * @brief Prescaler = 1024
 */
#define TIMER_PRESCALER_1024 (0x05)

/**
 * @def TIMER_PRESCALER_EXTERNAL_FALLING
 * @brief External Clock Source on T0 Pin. Clock on Falling Edge
 */
#define TIMER_PRESCALER_EXTERNAL_FALLING (0x06)

/**
 * @def TIMER_PRESCALER_EXTERNAL_RISING
 * @brief External Clock Source on T0 Pin. Clock on Rising Edge
 */
#define TIMER_PRESCALER_EXTERNAL_RISING (0x07)

/** @} */

/**
 * @defgroup timer_channels Timer Channels
 * @brief This section contains the Timer Channels
 * @{
 */

/**
 * @def TIMER_CHANNEL_0
 * @brief Timer Channel 0 (8-bit)
 */
#define TIMER_CHANNEL_0 (0)

/**
 * @def TIMER_CHANNEL_1
 * @brief Timer Channel 1 (16-bit)
 */
#define TIMER_CHANNEL_1 (1)

/**
 * @def TIMER_CHANNEL_2
 * @brief Timer Channel 2 (8-bit)
 */
#define TIMER_CHANNEL_2 (2)

/** @} */

/**
 * @brief This function is used to delay for a specific time in microseconds (us)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in microseconds (us)
 * @note Use this function for delays < 1ms
 */
void MTIMER_vSyncDelayUS(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This function is used to delay for a specific time in milliseconds (ms)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in milliseconds (ms)
 * @note Use this function for delays < 1s
 */
void MTIMER_vSyncDelayMS(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This function is used to delay for a specific time in seconds (s)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in seconds (s)
 * @note Use this function for delays >= 1s
 */
void MTIMER_vSyncDelayS(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This function is used to delay for a specific number of ticks
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Mode The Timer mode to be used @see timer_modes
 * @param[in] u8Prescaler The Timer prescaler to be used @see timer_prescaler
 * @param[in] u32Ticks The number of ticks to be counted
 */
void MTIMER_vSyncDelay(u8_t u8Channel, u8_t u8Mode, u8_t u8Prescaler, u32_t u32Ticks);

/**
 * @brief This function is used to stop the timer on a certain channel
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 */
void MTIMER_vStopTimer(u8_t u8Channel);

#endif /* TIMER_INTERFACE_H_ */