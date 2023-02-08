/**
 * @file USART_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the interfacing information of the USART driver
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"

/**
 * @defgroup usart_baudrates_single_speed USART Single Speed Baudrates
 * @brief This group contains the baudrates for the USART when in single speed mode (U2X = 0)
 * @{
 */

/**
 * @def USART_BAUDRATE_2400
 * @brief This macro is used to set the baudrate to 2400
 */
#define USART_BAUDRATE_SINGLE_SPEED_2400 (416)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_4800
 * @brief This macro is used to set the baudrate to 4800
 */
#define USART_BAUDRATE_SINGLE_SPEED_4800 (207)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_9600
 * @brief This macro is used to set the baudrate to 9600
 */
#define USART_BAUDRATE_SINGLE_SPEED_9600 (103)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_14_4k
 * @brief This macro is used to set the baudrate to 14.4k
 */
#define USART_BAUDRATE_SINGLE_SPEED_14_4k (68)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_19_2k
 * @brief This macro is used to set the baudrate to 19.2k
 */
#define USART_BAUDRATE_SINGLE_SPEED_19_2k (51)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_28_8k
 * @brief This macro is used to set the baudrate to 28.8k
 */
#define USART_BAUDRATE_SINGLE_SPEED_28_8k (34)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_57_6k
 * @brief This macro is used to set the baudrate to 57.6k
 */
#define USART_BAUDRATE_SINGLE_SPEED_57_6k (25)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_76_8k
 * @brief This macro is used to set the baudrate to 76.8k
 */
#define USART_BAUDRATE_SINGLE_SPEED_76_8k (12)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_115_2k
 * @brief This macro is used to set the baudrate to 115.2k
 */
#define USART_BAUDRATE_SINGLE_SPEED_115_2k (8)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_230_4k
 * @brief This macro is used to set the baudrate to 230.4k
 */
#define USART_BAUDRATE_SINGLE_SPEED_230_4k (3)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_250k
 * @brief This macro is used to set the baudrate to 250k
 */
#define USART_BAUDRATE_SINGLE_SPEED_250k (3)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_500k
 * @brief This macro is used to set the baudrate to 500k
 */
#define USART_BAUDRATE_SINGLE_SPEED_500k (1)

/**
 * @def USART_BAUDRATE_SINGLE_SPEED_1M
 * @brief This macro is used to set the baudrate to 1M
 */
#define USART_BAUDRATE_SINGLE_SPEED_1M (0)

/** @} */

/**
 * @defgroup usart_baudrates_double_speed USART Baudrates Double Speed
 * @brief This group contains the baudrates for the USART when in double speed mode (U2X = 1)
 * @{
 */

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_2400
 * @brief This macro is used to set the baudrate to 2400
 */
#define USART_BAUDRATE_DOUBLE_SPEED_2400 (832)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_4800
 * @brief This macro is used to set the baudrate to 4800
 */
#define USART_BAUDRATE_DOUBLE_SPEED_4800 (416)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_9600
 * @brief This macro is used to set the baudrate to 9600
 */
#define USART_BAUDRATE_DOUBLE_SPEED_9600 (207)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_14_4k
 * @brief This macro is used to set the baudrate to 14.4k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_14_4k (138)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_19_2k
 * @brief This macro is used to set the baudrate to 19.2k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_19_2k (103)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_28_8k
 * @brief This macro is used to set the baudrate to 28.8k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_28_8k (68)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_57_6k
 * @brief This macro is used to set the baudrate to 57.6k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_57_6k (51)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_76_8k
 * @brief This macro is used to set the baudrate to 76.8k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_76_8k (25)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_115_2k
 * @brief This macro is used to set the baudrate to 115.2k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_115_2k (16)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_230_4k
 * @brief This macro is used to set the baudrate to 230.4k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_230_4k (8)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_250k
 * @brief This macro is used to set the baudrate to 250k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_250k (7)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_500k
 * @brief This macro is used to set the baudrate to 500k
 */
#define USART_BAUDRATE_DOUBLE_SPEED_500k (3)

/**
 * @def USART_BAUDRATE_DOUBLE_SPEED_1M
 * @brief This macro is used to set the baudrate to 1M
 */
#define USART_BAUDRATE_DOUBLE_SPEED_1M (1)

/** @} */

/**
 * @defgroup usart_operation_modes USART Operation Modes
 * @brief This group contains the operation modes for the USART
 * @{
 */

/**
 * @def USART_OPERATION_MODE_ASYNC
 * @brief This macro is used to set the operation mode to asynchronous
 */
#define USART_OPERATION_MODE_ASYNC (0)

/**
 * @def USART_OPERATION_MODE_SYNC
 * @brief This macro is used to set the operation mode to synchronous
 */
#define USART_OPERATION_MODE_SYNC (0x40)

/** @} */

/**
 * @defgroup usart_parity_modes USART Parity Modes
 * @brief This group contains the parity modes for the USART
 * @{
 */

/**
 * @def USART_PARITY_DISABLED
 * @brief This macro is used to disable the parity bit
 */
#define USART_PARITY_DISABLED (0x00)

/**
 * @def USART_PARITY_EVEN
 * @brief This macro is used to set the parity bit to even
 */
#define USART_PARITY_EVEN (0x20)

/**
 * @def USART_PARITY_ODD
 * @brief This macro is used to set the parity bit to odd
 */
#define USART_PARITY_ODD (0x30)

/** @} */

/**
 * @defgroup usart_stop_bits USART Stop Bits
 * @brief This group contains the stop bits for the USART
 * @{
 */

/**
 * @def USART_STOP_BITS_1
 * @brief This macro is used to set the stop bits to 1
 */
#define USART_STOP_BITS_1 (0)

/**
 * @def USART_STOP_BITS_2
 * @brief This macro is used to set the stop bits to 2
 */
#define USART_STOP_BITS_2 (0x08)

/** @} */

/**
 * @defgroup usart_character_size USART Character Size
 * @brief This group contains the character size for the USART
 * @{
 */

/**
 * @def USART_CHARACTER_SIZE_5
 * @brief This macro is used to set the character size to 5 bits
 */
#define USART_CHARACTER_SIZE_5 (0)

/**
 * @def USART_CHARACTER_SIZE_6
 * @brief This macro is used to set the character size to 6 bits
 */
#define USART_CHARACTER_SIZE_6 (0x02)

/**
 * @def USART_CHARACTER_SIZE_7
 * @brief This macro is used to set the character size to 7 bits
 */
#define USART_CHARACTER_SIZE_7 (0x04)

/**
 * @def USART_CHARACTER_SIZE_8
 * @brief This macro is used to set the character size to 8 bits
 */
#define USART_CHARACTER_SIZE_8 (0x06)

/**
 * @def USART_CHARACTER_SIZE_9
 * @brief This macro is used to set the character size to 9 bits
 */
#define USART_CHARACTER_SIZE_9 (0x0E)

/** @} */

/**
 * @defgroup usart_clock_polarity USART Clock Polarity
 * @brief This group contains the clock polarity for the USART
 * @{
 */

/**
 * @def USART_CLOCK_POLARITY_RISING_FALLING
 * @brief This macro is used to set the clock polarity to falling/rising
 * @details Transmitted data is sampled on the rising edge of the clock, Received data is sampled on the falling edge of the clock
 * @note This is used for synchronous mode only
 */
#define USART_CLOCK_POLARITY_RISING_FALLING (0)

/**
 * @def USART_CLOCK_POLARITY_FALLING_RISING
 * @brief This macro is used to set the clock polarity to falling/rising
 * @details Transmitted data is sampled on the falling edge of the clock, Received data is sampled on the rising edge of the clock
 * @note This is used for synchronous mode only
 */
#define USART_CLOCK_POLARITY_FALLING_RISING (0x01)

/** @} */

/**
 * @defgroup usart_speed USART Speed
 * @brief This group contains the speed for the USART
 * @{
 */

/**
 * @def USART_SPEED_SINGLE
 * @brief This macro is used to set the speed to single
 */
#define USART_SPEED_SINGLE (0)

/**
 * @def USART_SPEED_DOUBLE
 * @brief This macro is used to set the speed to double
 */
#define USART_SPEED_DOUBLE (0x02)

/**
 * @defgroup usart_multi_processor USART Multi Processor Mode
 * @brief This group contains the multi processor mode for the USART
 * @{
 */

/**
 * @def USART_MULTI_PROCESSOR_DISABLED
 * @brief This macro is used to disable the multi processor mode
 */
#define USART_MULTI_PROCESSOR_DISABLED (0)

/**
 * @def USART_MULTI_PROCESSOR_ENABLED
 * @brief This macro is used to enable the multi processor mode
 */
#define USART_MULTI_PROCESSOR_ENABLED (0x01)

/** @} */

/**
 * @brief This function is used to initialize the USART module
 * @see USART_config.h for the configuration of the USART module
 */
void MUSART_vInit(void);

/**
 * @brief This function is used to transmit data synchronously
 * @param[in] u16Data The data to be transmitted
 * @return bool_t TRUE if the data is transmitted successfully, FALSE otherwise
 */
bool_t MUSART_vSyncTransmitData(u16_t u16Data);

/**
 * @brief This function is used to transmit data asynchronously
 * @param[in] u16Data The data to be transmitted
 * @param[in] pTransmitCallback The callback function to be called when the data is transmitted
 * @return bool_t TRUE if the data is transmitted successfully, FALSE otherwise
 */
bool_t MUSART_vAsyncTransmitData(u16_t u16Data, P2FUNC(void, pTransmitCallback)(void));

/**
 * @brief This function is used to check if the data is received
 * @return bool_t TRUE if the data is received, FALSE otherwise
 */
bool_t MUSART_bIsDataReceived(void);

/**
 * @brief This function is used to receive data synchronously
 * @param[out] u16Data The data to be received
 */
void MUSART_vSyncReceiveData(P2VAR(u16_t) u16Data);

/**
 * @brief This function is used to receive data asynchronously
 * @param[in] pReceiveCallback The callback function to be called when the data is received
 */
void MUSART_vAsyncReceiveData(P2FUNC(void, pReceiveCallback)(u16_t));

#endif // USART_INTERFACE_H_