/**
 * @file ADC_config.h
 * @author Mohamed Alaa
 * @brief This file contains the configuration information regarding the ADC peripheral
 * @version 1.0
 * @date 2023-01-26
 * @copyright Copyright (c) 2023
 */

#ifndef _ADC_CONFIG_H_
#define _ADC_CONFIG_H_

#include "ADC_interface.h"

/************************************************************************/
/*                          Interfacing macros                          */
/************************************************************************/

/**
 * @defgroup adc_configuration ADC Configuration
 * @{
 */

/**
 * @def ADC_REF_SELECTION
 * @brief ADC Voltage Reference Selection
 * @details This macro is used to select the voltage reference for the ADC
 * @see adc_voltage_reference_selection
 */
#define ADC_REF_SELECTION (ADC_VOLTAGE_REFERENCE_AVCC)

/**
 * @def ADC_RESULT_ADJUSTMENT
 * @brief ADC Result Adjustment
 * @details This macro is used to select the result adjustment direction for the ADC
 * @see adc_result_adjustment_direction
 */
#define ADC_RESULT_ADJUSTMENT (ADC_RESULT_ADJUSTMENT_RIGHT)

/**
 * @def ADC_PRESCALER
 * @brief ADC Default Prescaler
 * @details This macro is used to select the default prescaler for the ADC
 * @see adc_prescalers
 */
#define ADC_PRESCALER (ADC_PRESCALER_128)

/** @} */

#endif // _ADC_CONFIG_H_