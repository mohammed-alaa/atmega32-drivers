/**
 * @file TIMER_config.h
 * @author Mohamed Alaa
 * @brief This file contains the configuration of the TIMER driver
 * @version 1.0
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 */

#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_

#include "TIMER_interface.h"

/**
 * @defgroup general_timer_configurations General Timer Configurations
 * @brief This section contains the general configurations of the timer driver
 * @{
 */

/**
 * @def TIMER_CFG_FASTPWM01_PRESCALER
 * @brief This macro is used to configure the prescaler of timer 0 & 1 in fast PWM mode
 */
#define TIMER_CFG_FASTPWM01_PRESCALER (TIMER_PRESCALER_TIMER01_64)

/**
 * @def TIMER_CFG_FASTPWM2_PRESCALER
 * @brief This macro is used to configure the prescaler of timer 2 in fast PWM mode
 */
#define TIMER_CFG_FASTPWM2_PRESCALER (TIMER_PRESCALER_TIMER2_64)

/**
 * @def TIMER_CFG_PHASECORRECTPWM01_PRESCALER
 * @brief This macro is used to configure the prescaler of timer 0 & 1 in phase correct PWM mode
 */
#define TIMER_CFG_PHASECORRECTPWM01_PRESCALER (TIMER_PRESCALER_TIMER01_64)

/**
 * @def TIMER_CFG_PHASECORRECTPWM2_PRESCALER
 * @brief This macro is used to configure the prescaler of timer 2 in phase correct PWM mode
 */
#define TIMER_CFG_PHASECORRECTPWM2_PRESCALER (TIMER_PRESCALER_TIMER2_64)

/**
 * @def TIMER_CFG_TIMER0_CTC_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 0 in CTC mode
 * @see timer_timer02_ctc_output_modes
 * @note This is dedicated for timer 0 in CTC mode only
 */
#define TIMER_CFG_TIMER0_CTC_PORT_OUTPUT_MODE (TIMER_TIMER02_CTC_OUTPUT_MODE_NORMAL)

/**
 * @def TIMER_CFG_TIMER0_FASTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 0 in Fast PWM mode
 * @see timer_timer02_fastpwm_output_modes
 * @note This is dedicated for timer 0 in Fast PWM mode only
 */
#define TIMER_CFG_TIMER0_FASTPWM_PORT_OUTPUT_MODE (TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER0_PHASECORRECTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 0 in Phase Correct PWM mode
 * @see timer_timer02_phasecorrectpwm_output_modes
 * @note This is dedicated for timer 0 in Phase Correct PWM mode only
 */
#define TIMER_CFG_TIMER0_PHASECORRECTPWM_PORT_OUTPUT_MODE (TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER1A_CTC_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel A in CTC mode
 * @see timer_timer1a_ctc_output_modes
 * @note This is dedicated for timer 1 channel A in CTC mode only
 */
#define TIMER_CFG_TIMER1A_CTC_PORT_OUTPUT_MODE (TIMER_TIMER1A_CTC_OUTPUT_MODE_NORMAL)

/**
 * @def TIMER_CFG_TIMER1A_FASTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel A in Fast PWM mode
 * @see timer_timer1a_fastpwm_output_modes
 * @note This is dedicated for timer 1 channel A in Fast PWM mode only
 */
#define TIMER_CFG_TIMER1A_FASTPWM_PORT_OUTPUT_MODE (TIMER_TIMER1A_FASTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER1A_PHASECORRECTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel A in Phase Correct PWM mode
 * @see timer_timer1a_phasecorrectpwm_output_modes
 * @note This is dedicated for timer 1 channel A in Phase Correct PWM mode only
 */
#define TIMER_CFG_TIMER1A_PHASECORRECTPWM_PORT_OUTPUT_MODE (TIMER_TIMER1A_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER1B_CTC_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel B in CTC mode
 * @see timer_timer1b_ctc_output_modes
 * @note This is dedicated for timer 1 channel B in CTC mode only
 */
#define TIMER_CFG_TIMER1B_CTC_PORT_OUTPUT_MODE (TIMER_TIMER1B_CTC_OUTPUT_MODE_NORMAL)

/**
 * @def TIMER_CFG_TIMER1B_FASTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel B in Fast PWM mode
 * @see timer_timer1b_fastpwm_output_modes
 * @note This is dedicated for timer 1 channel B in Fast PWM mode only
 */
#define TIMER_CFG_TIMER1B_FASTPWM_PORT_OUTPUT_MODE (TIMER_TIMER1B_FASTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER1B_PHASECORRECTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 1 channel B in Phase Correct PWM mode
 * @see timer_timer1b_phasecorrectpwm_output_modes
 * @note This is dedicated for timer 1 channel B in Phase Correct PWM mode only
 */
#define TIMER_CFG_TIMER1B_PHASECORRECTPWM_PORT_OUTPUT_MODE (TIMER_TIMER1B_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER2_CTC_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 2 in CTC mode
 * @see timer_timer02_ctc_output_modes
 * @note This is dedicated for timer 2 in CTC mode only
 */
#define TIMER_CFG_TIMER2_CTC_PORT_OUTPUT_MODE (TIMER_TIMER02_CTC_OUTPUT_MODE_NORMAL)

/**
 * @def TIMER_CFG_TIMER2_FASTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 2 in Fast PWM mode
 * @see timer_timer02_fastpwm_output_modes
 * @note This is dedicated for timer 2 in Fast PWM mode only
 */
#define TIMER_CFG_TIMER2_FASTPWM_PORT_OUTPUT_MODE (TIMER_TIMER02_FASTPWM_OUTPUT_MODE_NON_INVERTING)

/**
 * @def TIMER_CFG_TIMER2_PHASECORRECTPWM_PORT_OUTPUT_MODE
 * @brief This macro is used to configure the port output mode of timer 2 in Phase Correct PWM mode
 * @see timer_timer02_phasecorrectpwm_output_modes
 * @note This is dedicated for timer 2 in Phase Correct PWM mode only
 */
#define TIMER_CFG_TIMER2_PHASECORRECTPWM_PORT_OUTPUT_MODE (TIMER_TIMER02_PHASECORRECTPWM_OUTPUT_MODE_NON_INVERTING)

/** @} */

#endif /* TIMER_CONFIG_H_ */