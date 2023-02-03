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
 * @def TIMER_MODE_PWM_PHASECORRECT
 * @brief Phase Correct Pulse Width Modulation Mode (Phase Correct PWM)
 */
#define TIMER_MODE_PWM_PHASECORRECT (0x40)

/**
 * @def TIMER_MODE_PWM_FAST
 * @brief Fast Pulse Width Modulation Mode (Fast PWM)
 */
#define TIMER_MODE_PWM_FAST (0x48)

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
 * @defgroup timer_timer02_ctc_output_modes Timer 0/2 CTC Output Modes
 * @brief This section contains the Timer CTC Output Modes for Timer 0 and 2 only (8-bit)
 * @{
 */

/**
 * @def TIMER_TIMER02_CTC_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC0/OC2 disconnected
 */
#define TIMER_TIMER02_CTC_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER02_CTC_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC0/OC2 on Compare Match
 */
#define TIMER_TIMER02_CTC_OUTPUT_MODE_TOGGLE (0x10)

/**
 * @def TIMER_TIMER02_CTC_OUTPUT_MODE_CLEAR
 * @brief Clear OC0/OC2 on Compare Match
 */
#define TIMER_TIMER02_CTC_OUTPUT_MODE_CLEAR (0x20)

/**
 * @def TIMER_TIMER02_CTC_OUTPUT_MODE_SET
 * @brief Set OC0/OC2 on Compare Match
 */
#define TIMER_TIMER02_CTC_OUTPUT_MODE_SET (0x30)

/** @} */

/**
 * @defgroup timer_timer02_fastpwm_output_modes Timer 0/2 Fast PWM Output Modes
 * @brief This section contains the Timer Fast PWM Output Modes for Timer 0 and 2 only (8-bit)
 * @{
 */

/**
 * @def TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC0/OC2 disconnected
 */
#define TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC0/OC2 on Compare Match, set OC0/OC2 at BOTTOM (non-inverting mode)
 */
#define TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NON_INVERTING (0x20)

/**
 * @def TIMER_TIMER02_FASTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC0/OC2 on Compare Match, clear OC0/OC2 at BOTTOM (inverting mode)
 */
#define TIMER_TIMER02_FASTPWM_OUTPUT_MODE_INVERTING (0x30)

/** @} */

/**
 * @defgroup timer_timer02_phasecorrectpwm_output_modes Timer 0/2 Phase Correct PWM Output Modes
 * @brief This section contains the Timer Phase Correct PWM Output Modes for Timer 0 and 2 only (8-bit)
 * @{
 */

/**
 * @def TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC0/OC2 disconnected
 */
#define TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC0/OC2 on Compare Match when up-counting, Set OC0/OC2 on Compare Match when down-counting (non-inverting mode)
 */
#define TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING (0x20)

/**
 * @def TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC0/OC2 on Compare Match when up-counting, Clear OC0/OC2 on Compare Match when down-counting (inverting mode)
 */
#define TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_INVERTING (0x30)

/** @} */

/**
 * @defgroup timer_timer1a_ctc_output_modes Timer 1 Channel A CTC Output Modes
 * @brief This section contains the Timer CTC Output Modes for Timer 1 Channel A only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1A_CTC_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1A disconnected
 */
#define TIMER_TIMER1A_CTC_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1A_CTC_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1A on Compare Match
 */
#define TIMER_TIMER1A_CTC_OUTPUT_MODE_TOGGLE (0x40)

/**
 * @def TIMER_TIMER1A_CTC_OUTPUT_MODE_CLEAR
 * @brief Clear OC1A on Compare Match
 */
#define TIMER_TIMER1A_CTC_OUTPUT_MODE_CLEAR (0x80)

/**
 * @def TIMER_TIMER1A_CTC_OUTPUT_MODE_SET
 * @brief Set OC1A on Compare Match
 */
#define TIMER_TIMER1A_CTC_OUTPUT_MODE_SET (0xC0)

/** @} */

/**
 * @defgroup timer_timer1a_fastpwm_output_modes Timer 1 Channel A Fast PWM Output Modes
 * @brief This section contains the Timer Fast PWM Output Modes for Timer 1 Channel A only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1A disconnected
 */
#define TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1A on Compare Match
 */
#define TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_TOGGLE (0x40)

/**
 * @def TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC1A on Compare Match, set OC1A at BOTTOM (non-inverting mode)
 */
#define TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_NON_INVERTING (0x80)

/**
 * @def TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC1A on Compare Match, clear OC1A at BOTTOM (inverting mode)
 */
#define TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_INVERTING (0xC0)

/** @} */

/**
 * @defgroup timer_timer1a_phasecorrectpwm_output_modes Timer 1 Channel A Phase Correct PWM Output Modes
 * @brief This section contains the Timer Phase Correct PWM Output Modes for Timer 1 Channel A only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1A disconnected
 */
#define TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1A on Compare Match
 */
#define TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_TOGGLE (0x40)

/**
 * @def TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC1A on Compare Match when up-counting, Set OC1A on Compare Match when down-counting (non-inverting mode)
 */
#define TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING (0x80)

/**
 * @def TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC1A on Compare Match when up-counting, Clear OC1A on Compare Match when down-counting (inverting mode)
 */
#define TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_INVERTING (0xC0)

/** @} */

/**
 * @defgroup timer_timer1b_ctc_output_modes Timer 1 Channel B CTC Output Modes
 * @brief This section contains the Timer CTC Output Modes for Timer 1 Channel B only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1B_CTC_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1B disconnected
 */
#define TIMER_TIMER1B_CTC_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1B_CTC_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1B on Compare Match
 */
#define TIMER_TIMER1B_CTC_OUTPUT_MODE_TOGGLE (0x10)

/**
 * @def TIMER_TIMER1B_CTC_OUTPUT_MODE_CLEAR
 * @brief Clear OC1B on Compare Match
 */
#define TIMER_TIMER1B_CTC_OUTPUT_MODE_CLEAR (0x20)

/**
 * @def TIMER_TIMER1B_CTC_OUTPUT_MODE_SET
 * @brief Set OC1B on Compare Match
 */
#define TIMER_TIMER1B_CTC_OUTPUT_MODE_SET (0x30)

/** @} */

/**
 * @defgroup timer_timer1b_fastpwm_output_modes Timer 1 Channel B Fast PWM Output Modes
 * @brief This section contains the Timer Fast PWM Output Modes for Timer 1 Channel B only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1B disconnected
 */
#define TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1B on Compare Match
 */
#define TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_TOGGLE (0x10)

/**
 * @def TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC1B on Compare Match, set OC1B at BOTTOM (non-inverting mode)
 */
#define TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_NON_INVERTING (0x20)

/**
 * @def TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC1B on Compare Match, clear OC1B at BOTTOM (inverting mode)
 */
#define TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_INVERTING (0x30)

/** @} */

/**
 * @defgroup timer_timer1b_phasecorrectpwm_output_modes Timer 1 Channel B Phase Correct PWM Output Modes
 * @brief This section contains the Timer Phase Correct PWM Output Modes for Timer 1 Channel B only (16-bit)
 * @{
 */

/**
 * @def TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_NORMAL
 * @brief Normal port operation, OC1B disconnected
 */
#define TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_NORMAL (0x00)

/**
 * @def TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_TOGGLE
 * @brief Toggle OC1B on Compare Match
 */
#define TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_TOGGLE (0x10)

/**
 * @def TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING
 * @brief Clear OC1B on Compare Match when up-counting, Set OC1B on Compare Match when down-counting (non-inverting mode)
 */
#define TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING (0x20)

/**
 * @def TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_INVERTING
 * @brief Set OC1B on Compare Match when up-counting, Clear OC1B on Compare Match when down-counting (inverting mode)
 */
#define TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_INVERTING (0x30)

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

/**
 * @brief This function is used to output a PWM signal in Fast PWM mode on a certain channel with a certain duty cycle
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8DutyCycle The duty cycle of the PWM signal (0-255)
 */
void MTIMER_vOutputFastPWM(u8_t u8Channel, u8_t u8DutyCycle);

/**
 * @brief This function is used to output a PWM signal in Phase Correct PWM mode on a certain channel with a certain duty cycle
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8DutyCycle The duty cycle of the PWM signal (0-255)
 */
void MTIMER_vOutputPhaseCorrectPWM(u8_t u8Channel, u8_t u8DutyCycle);

#endif /* TIMER_INTERFACE_H_ */