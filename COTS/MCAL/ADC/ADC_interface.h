/**
 * @file ADC_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the interface information regarding the ADC peripheral
 * @version 1.0
 * @date 2023-01-26
 * @copyright Copyright (c) 2023
 */

#ifndef _ADC_INTERFACE_H_
#define _ADC_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"

/************************************************************************/
/*                          Interfacing macros                          */
/************************************************************************/

/**
 * @defgroup adc_voltage_references ADC Voltage References
 * @{
 */

/**
 * @def ADC_VOLTAGE_REFERENCE_AREF
 * @brief ADC Voltage Reference AREF
 */
#define ADC_VOLTAGE_REFERENCE_AREF (0)

/**
 * @def ADC_VOLTAGE_REFERENCE_AVCC
 * @brief ADC Voltage Reference AVCC
 */
#define ADC_VOLTAGE_REFERENCE_AVCC (0x40)

/**
 * @def ADC_VOLTAGE_REFERENCE_INTERNAL
 * @brief ADC Voltage Reference Internal
 */
#define ADC_VOLTAGE_REFERENCE_INTERNAL (0xC0)

/** @} */

/**
 * @defgroup adc_result_adjustment_direction ADC Result Adjustment Direction
 * @{
 */

/**
 * @def ADC_RESULT_ADJUSTMENT_RIGHT
 * @brief ADC Result Adjustment Direction Right
 */
#define ADC_RESULT_ADJUSTMENT_RIGHT (0)

/**
 * @def ADC_RESULT_ADJUSTMENT_LEFT
 * @brief ADC Result Adjustment Direction Left
 */
#define ADC_RESULT_ADJUSTMENT_LEFT (0x20)

/** @} */

/**
 * @defgroup adc_prescalers ADC Prescalers
 * @{
 */

/**
 * @def ADC_PRESCALER_2
 * @brief ADC Prescaler 2
*/
#define ADC_PRESCALER_2 (1)

/**
 * @def ADC_PRESCALER_4
 * @brief ADC Prescaler 4
*/
#define ADC_PRESCALER_4 (2)

/**
 * @def ADC_PRESCALER_8
 * @brief ADC Prescaler 8
*/
#define ADC_PRESCALER_8 (3)

/**
 * @def ADC_PRESCALER_16
 * @brief ADC Prescaler 16
*/
#define ADC_PRESCALER_16 (4)

/**
 * @def ADC_PRESCALER_32
 * @brief ADC Prescaler 32
*/
#define ADC_PRESCALER_32 (5)

/**
 * @def ADC_PRESCALER_64
 * @brief ADC Prescaler 64
*/
#define ADC_PRESCALER_64 (6)

/**
 * @def ADC_PRESCALER_128
 * @brief ADC Prescaler 128
*/
#define ADC_PRESCALER_128 (7)

/** @} */

/**
 * @defgroup adc_channels ADC Channels
 * @{
 */

/**
 * @def ADC_CHANNEL_0
 * @brief ADC Channel 0
 */
#define ADC_CHANNEL_0 (0)

/**
 * @def ADC_CHANNEL_1
 * @brief ADC Channel 1
 */
#define ADC_CHANNEL_1 (1)

/**
 * @def ADC_CHANNEL_2
 * @brief ADC Channel 2
 */
#define ADC_CHANNEL_2 (2)

/**
 * @def ADC_CHANNEL_3
 * @brief ADC Channel 3
 */
#define ADC_CHANNEL_3 (3)

/**
 * @def ADC_CHANNEL_4
 * @brief ADC Channel 4
 */
#define ADC_CHANNEL_4 (4)

/**
 * @def ADC_CHANNEL_5
 * @brief ADC Channel 5
 */
#define ADC_CHANNEL_5 (5)

/**
 * @def ADC_CHANNEL_6
 * @brief ADC Channel 6
 */
#define ADC_CHANNEL_6 (6)

/**
 * @def ADC_CHANNEL_7
 * @brief ADC Channel 7
 */
#define ADC_CHANNEL_7 (7)

/** @} */

/************************************************************************/
/*                          Interfacing functions                       */
/************************************************************************/

/**
 * @brief This function initializes the ADC peripheral with the given configurations
 * @see ADC_REF_SELECTION
 * @see ADC_RESULT_ADJUSTMENT
 */
void MADC_vInit(void);

/**
 * @brief This function reads the value of the selected channel
 * @param u8ChannelSelection Channel to be read @see adc_channels
 * @param u8ChannelPrescaler Channel Prescaler @see adc_prescalers
 * @return u16_t ADC value of the selected channel
 */
u16_t MADC_u16ReadChannel(u8_t u8ChannelSelection, u8_t u8ChannelPrescaler);

#endif // _ADC_INTERFACE_H_