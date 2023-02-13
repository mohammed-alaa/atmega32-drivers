/**
 * @file SPI_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the interfacing information for the SPI driver
 * @version 1.0
 * @date 2023-02-13
 * @copyright Copyright (c) 2023
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_COMPILER.h"

/**
 * @defgroup spi_data_order SPI Data Order
 * @brief This section contains the data order options for the SPI driver
 * @{
 */

/**
 * @def SPI_DATA_ORDER_LSB
 * @brief This macro is used to set the data order to LSB first
 */
#define SPI_DATA_ORDER_LSB (0x20)

/**
 * @def SPI_DATA_ORDER_MSB
 * @brief This macro is used to set the data order to MSB first
 */
#define SPI_DATA_ORDER_MSB (0x00)

/** @} */

/**
 * @defgroup spi_clock_polarity SPI Clock Polarity
 * @brief This section contains the clock polarity options for the SPI driver
 * @{
 */

/**
 * @def SPI_CLOCK_POLARITY_IDLE_LOW
 * @brief This macro is used to set the clock polarity to idle low
 */
#define SPI_CLOCK_POLARITY_IDLE_LOW (0x00)

/**
 * @def SPI_CLOCK_POLARITY_IDLE_HIGH
 * @brief This macro is used to set the clock polarity to idle high
 */
#define SPI_CLOCK_POLARITY_IDLE_HIGH (0x80)

/** @} */

/**
 * @defgroup spi_clock_phase SPI Clock Phase
 * @brief This section contains the clock phase options for the SPI driver
 * @{
 */

/**
 * @def SPI_CLOCK_PHASE_SAMPLE_LEADING
 * @brief This macro is used to set the clock phase to sample leading
 */
#define SPI_CLOCK_PHASE_SAMPLE_LEADING (0x00)

/**
 * @def SPI_CLOCK_PHASE_SETUP_LEADING
 * @brief This macro is used to set the clock phase to setup leading
 */
#define SPI_CLOCK_PHASE_SETUP_LEADING (0x40)

/** @} */

/**
 * @defgroup spi_clock_rate SPI Clock Rate
 * @brief This section contains the clock rate options for the SPI driver
 * @{
 */

/**
 * @def SPI_CLOCK_RATE_FOSC_4
 * @brief This macro is used to set the clock rate to Fosc/4 in single speed and Fosc/2 in double speed
 */
#define SPI_CLOCK_RATE_FOSC_4 (0x00)

/**
 * @def SPI_CLOCK_RATE_FOSC_16
 * @brief This macro is used to set the clock rate to Fosc/16 in single speed and Fosc/8 in double speed
 */
#define SPI_CLOCK_RATE_FOSC_16 (0x01)

/**
 * @def SPI_CLOCK_RATE_FOSC_64
 * @brief This macro is used to set the clock rate to Fosc/64 in single speed and Fosc/32 in double speed
 */
#define SPI_CLOCK_RATE_FOSC_64 (0x02)

/**
 * @def SPI_CLOCK_RATE_FOSC_128
 * @brief This macro is used to set the clock rate to Fosc/128 in single speed and Fosc/64 in double speed
 */
#define SPI_CLOCK_RATE_FOSC_128 (0x03)

/** @} */

/**
 * @defgroup spi_speed_mode SPI Speed Mode
 * @brief This section contains the speed mode options for the SPI driver
 * @{
 */

/**
 * @def SPI_SPEED_MODE_SINGLE
 * @brief This macro is used to set the speed mode to single speed
 */
#define SPI_SPEED_MODE_SINGLE (0x00)

/**
 * @def SPI_SPEED_MODE_DOUBLE
 * @brief This macro is used to set the speed mode to double speed
 */
#define SPI_SPEED_MODE_DOUBLE (0x01)

/** @} */

/**
 * @defgroup spi_mode SPI Mode
 * @brief This section contains the SPI mode options for the SPI driver
 * @{
 */

/**
 * @def SPI_MODE_MASTER
 * @brief This macro is used to set the SPI mode to master
 */
#define SPI_MODE_MASTER (0x10)

/**
 * @def SPI_MODE_SLAVE
 * @brief This macro is used to set the SPI mode to slave
 */
#define SPI_MODE_SLAVE (0x00)

/** @} */

/**
 * @brief This function is used to initialize the SPI module
 */
void MSPI_vInit(void);

/**
 * @brief This function is used to send a byte over the SPI bus in master mode
 * @param[in] u8TransmittedData The byte to be transmitted
 * @param[out] pu8ReceivedData The byte to be received (can be NULL)
 */
void MSPI_vMasterTransceiveByte(u8_t u8TransmittedData, P2VAR(u8_t) pu8ReceivedData);

/**
 * @brief This function is used to send a byte over the SPI bus in slave mode
 * @param[in] u8TransmittedData The byte to be transmitted
 * @param[out] pu8ReceivedData The byte to be received (can be NULL)
 */
void MSPI_vSlaveTransceiveByte(u8_t u8TransmittedData, P2VAR(u8_t) pu8ReceivedData);

#endif /* SPI_INTERFACE_H_ */