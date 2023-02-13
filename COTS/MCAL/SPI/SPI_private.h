/**
 * @file SPI_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information for the SPI driver
 * @version 1.0
 * @date 2023-02-13
 * @copyright Copyright (c) 2023
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/**
 * @defgroup spi_registers SPI Registers
 * @brief This section contains the SPI registers
 * @{
 */

/**
 * @def SPCR
 * @brief SPI Control Register
*/
#define SPCR REGISTER_U8(0x2D)

/**
 * @def SPSR
 * @brief SPI Status Register
*/
#define SPSR REGISTER_U8(0x2E)

/**
 * @def SPDR
 * @brief SPI Data Register
*/
#define SPDR REGISTER_U8(0x2F)

/** @} */

/**
 * @defgroup spi_bits SPI Bits
 * @brief This section contains the SPI bits
 * @{
 */

/**
 * @def SPIF
 * @brief SPI Interrupt Flag
 */
#define SPIF (7)

/** @} */

#endif /* SPI_PRIVATE_H_ */