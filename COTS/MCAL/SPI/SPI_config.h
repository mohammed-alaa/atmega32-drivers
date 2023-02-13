/**
 * @file SPI_config.h
 * @author Mohamed Alaa
 * @brief This file contains the configuration information for the SPI driver
 * @version 1.0
 * @date 2023-02-13
 * @copyright Copyright (c) 2023
 */

#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "SPI_interface.h"

/**
 * @defgroup SPI_configs SPI Configurations
 * @brief This section contains the configuration information for the SPI driver
 * @{
 */

/**
 * @def SPI_SPEED_MODE
 * @brief This macro is used to select the SPI mode
 * @see spi_speed_mode
 */
#define SPI_SPEED_MODE (SPI_SPEED_MODE_SINGLE)

/**
 * @def SPI_CLOCK_RATE
 * @brief This macro is used to select the SPI clock rate
 * @see spi_clock_rate
 */
#define SPI_CLOCK_RATE (SPI_CLOCK_RATE_FOSC_16)

/**
 * @def SPI_CLOCK_PHASE
 * @brief This macro is used to select the SPI clock phase
 * @see spi_clock_phase
 */
#define SPI_CLOCK_PHASE (SPI_CLOCK_PHASE_SAMPLE_LEADING)

/**
 * @def SPI_CLOCK_POLARITY
 * @brief This macro is used to select the SPI clock polarity
 * @see spi_clock_polarity
 */
#define SPI_CLOCK_POLARITY (SPI_CLOCK_POLARITY_IDLE_LOW)

/**
 * @def SPI_DATA_ORDER
 * @brief This macro is used to select the SPI data order
 * @see spi_data_order
 */
#define SPI_DATA_ORDER (SPI_DATA_ORDER_MSB)

/**
 * @def SPI_MODE
 * @brief This macro is used to select the SPI mode
 * @see spi_mode
 */
#define SPI_MODE (SPI_MODE_MASTER)

/** @} */

#endif /* SPI_CONFIG_H_ */