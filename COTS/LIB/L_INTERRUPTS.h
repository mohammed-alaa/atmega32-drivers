/**
 * @file L_INTERRUPTS.h
 * @author Mohamed Alaa
 * @brief This file contains AVR vector table interrupt ISRs
 * @version 0.1
 * @date 2023-01-25
 * @copyright Copyright (c) 2023
 */

#ifndef _L_INTERRUPTS_H_
#define _L_INTERRUPTS_H_

#include "LSTD_HW_REGS.h"

#define SREG REGISTER(0x5F)

/**
 * @defgroup interrupts_vector_table External Interrupt Vector Table
 * @{
 */

/**
 * @def EXTI_VECT_INT0
 * @brief External interrupt request 0
 */
#define EXTI_VECT_INT0 __vector_1

/**
 * @def EXTI_VECT_INT1
 * @brief External interrupt request 1
 */
#define EXTI_VECT_INT1 __vector_2

/**
 * @def EXTI_VECT_INT2
 * @brief External interrupt request 2
 */
#define EXTI_VECT_INT2 __vector_3

/**
 * @def EXTI_VECT_TIMER2_COMP
 * @brief Timer/Counter 2 Compare Match
 */
#define EXTI_VECT_TIMER2_COMP __vector_4

/**
 * @def EXTI_VECT_TIMER2_OVF
 * @brief Timer/Counter 2 Overflow
 */
#define EXTI_VECT_TIMER2_OVF __vector_5

/**
 * @def EXTI_VECT_TIMER1_CAPT
 * @brief Timer/ Counter 1 Capture Event
 */
#define EXTI_VECT_TIMER1_CAPT __vector_6

/**
 * @def EXTI_VECT_TIMER1_COMPA
 * @brief Timer/Counter 1 Compare Match A
 */
#define EXTI_VECT_TIMER1_COMPA __vector_7

/**
 * @def EXTI_VECT_TIMER1_COMPB
 * @brief Timer/Counter 1 Compare Match B
 */
#define EXTI_VECT_TIMER1_COMPB __vector_8

/**
 * @def EXTI_VECT_TIMER1_OVF
 * @brief Timer/Counter 1 Overflow
 */
#define EXTI_VECT_TIMER1_OVF __vector_9

/**
 * @def EXTI_VECT_TIMER0_COMP
 * @brief Timer/Counter 0 Compare Match
 */
#define EXTI_VECT_TIMER0_COMP __vector_10

/**
 * @def EXTI_VECT_TIMER0_OVF
 * @brief Timer/Counter 0 Overflow
 */
#define EXTI_VECT_TIMER0_OVF __vector_11

/**
 * @def EXTI_VECT_SPI_STC
 * @brief Serial Transfer Complete
 */
#define EXTI_VECT_SPI_STC __vector_12

/**
 * @def EXTI_VECT_USART_RXC
 * @brief USART, RX Complete
 */
#define EXTI_VECT_USART_RXC __vector_13

/**
 * @def EXTI_VECT_USART_UDRE
 * @brief USART Data Register Empty
 */
#define EXTI_VECT_USART_UDRE __vector_14

/**
 * @def EXTI_VECT_USART_TXC
 * @brief USART, TX Complete
 */
#define EXTI_VECT_USART_TXC __vector_15

/**
 * @def EXTI_VECT_ADC
 * @brief ADC Conversion Complete
 */
#define EXTI_VECT_ADC __vector_16

/**
 * @def EXTI_VECT_EE_RDY
 * @brief EEPROM Ready
 */
#define EXTI_VECT_EE_RDY __vector_17

/**
 * @def EXTI_VECT_ANA_COMP
 * @brief Analog Comparator
 */
#define EXTI_VECT_ANA_COMP __vector_18

/**
 * @def EXTI_VECT_TWI
 * @brief Two-write Serial Interface
 */
#define EXTI_VECT_TWI __vector_19

/**
 * @def EXTI_VECT_SPM_RDY
 * @brief Store Program Memory Ready
 */
#define EXTI_VECT_SPM_RDY __vector_20

/** @} */

/**
 * @def ISR(VECTOR_NUM)
 * @brief Interrupt Service Routine (ISR) Definition
 * @see interrupts_vector_table
 */
#define ISR(VECTOR_NUM)                            \
    void VECTOR_NUM(void) __attribute__((signal)); \
    void VECTOR_NUM(void)

#endif // _L_INTERRUPTS_H_