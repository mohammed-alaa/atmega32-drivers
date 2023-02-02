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
 * @defgroup timer01_prescaler Prescalers for Timer 0 and 1
 * @brief This section contains prescalers for Timer 0 and 1
 * @{
 */

/**
 * @def TIMER_PRESCALER_TIMER01_1
 * @brief Prescaler = 1
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_1 (0x01)

/**
 * @def TIMER_PRESCALER_TIMER01_8
 * @brief Prescaler = 8
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_8 (0x02)

/**
 * @def TIMER_PRESCALER_TIMER01_64
 * @brief Prescaler = 64
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_64 (0x03)

/**
 * @def TIMER_PRESCALER_TIMER01_256
 * @brief Prescaler = 256
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_256 (0x04)

/**
 * @def TIMER_PRESCALER_TIMER01_1024
 * @brief Prescaler = 1024
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_1024 (0x05)

/**
 * @def TIMER_PRESCALER_TIMER01_EXTERNAL_FALLING
 * @brief External Clock Source on T0 Pin. Clock on Falling Edge
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_EXTERNAL_FALLING (0x06)

/**
 * @def TIMER_PRESCALER_TIMER01_EXTERNAL_RISING
 * @brief External Clock Source on T0 Pin. Clock on Rising Edge
 * @note This should be used for timer 0 and 1 only
 */
#define TIMER_PRESCALER_TIMER01_EXTERNAL_RISING (0x07)

/** @} */

/**
 * @defgroup timer2_prescaler Prescalers for Timer 2
 * @brief This section contains prescalers for Timer 2
 * @{
 */

/**
 * @def TIMER_PRESCALER_TIMER2_1
 * @brief Prescaler = 1
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_1 (0x01)

/**
 * @def TIMER_PRESCALER_TIMER2_8
 * @brief Prescaler = 8
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_8 (0x02)

/**
 * @def TIMER_PRESCALER_TIMER2_32
 * @brief Prescaler = 32
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_32 (0x03)

/**
 * @def TIMER_PRESCALER_TIMER2_64
 * @brief Prescaler = 64
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_64 (0x04)

/**
 * @def TIMER_PRESCALER_TIMER2_128
 * @brief Prescaler = 128
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_128 (0x05)

/**
 * @def TIMER_PRESCALER_TIMER2_256
 * @brief Prescaler = 256
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_256 (0x06)

/**
 * @def TIMER_PRESCALER_TIMER2_1024
 * @brief Prescaler = 1024
 * @note This should be used for timer 2 only
 */
#define TIMER_PRESCALER_TIMER2_1024 (0x07)

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
 * @def TIMER_CHANNEL_1A
 * @brief Timer Channel 1 A (16-bit)
 */
#define TIMER_CHANNEL_1A (1)

/**
 * @def TIMER_CHANNEL_1B
 * @brief Timer Channel 1 B (16-bit)
 * @note This channel cannot be used as a delay channel and automatically ignored and replaced by TIMER_CHANNEL_1A instead
 */
#define TIMER_CHANNEL_1B (2)

/**
 * @def TIMER_CHANNEL_2
 * @brief Timer Channel 2 (8-bit)
 */
#define TIMER_CHANNEL_2 (3)

/** @} */

/**
 * @brief This function is used to stop the timer on a certain channel
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 */
void MTIMER_vStopTimer(u8_t u8Channel);

/**
 * @brief This function is used to delay for a specific time in microseconds (us)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in microseconds (us)
 * @note Use this function for delays < 1ms
 */
void MTIMER_vDelayUS(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This function is used to delay for a specific time in milliseconds (ms)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in milliseconds (ms)
 * @note Use this function for delays < 1s
 */
void MTIMER_vDelayMS(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This function is used to delay for a specific time in seconds (s)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32Delay The delay time in seconds (s)
 * @note Use this function for delays >= 1s
 */
void MTIMER_vDelaySec(u8_t u8Channel, u32_t u32Delay);

/**
 * @brief This is a more of a generic function to delay for a specific time
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Mode The Timer mode to be used @see timer_modes
 * @param[in] u8Prescaler The Timer prescaler to be used @see timer_prescaler
 * @param[in] u16InitalValue The initial value of the timer
 * @param[in] u32Delay The number of ticks to be counted
 * @note When using this function in normal mode, the u16InitalValue is ignored and the timer is started from 0 instead
 * @note When using this function in CTC mode, the u16InitalValue is used as the compare value
 */
void MTIMER_vDelay(u8_t u8Channel, u8_t u8Mode, u8_t u8Prescaler, u16_t u16InitalValue, u32_t u32Delay);

#endif /* TIMER_INTERFACE_H_ */