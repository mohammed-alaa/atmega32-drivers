/**
 * @file SPI_program.c
 * @author Mohamed Alaa
 * @brief This file contains the source code for the SPI driver
 * @version 1.0
 * @date 2023-02-13
 * @copyright Copyright (c) 2023
 */

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "../../LIB/LSTD_VALUES.h"
#include "SPI_private.h"
#include "SPI_interface.h"
#include "SPI_config.h"

void MSPI_vInit(void)
{
    SPCR = (0xC0 | SPI_DATA_ORDER | SPI_MODE | SPI_CLOCK_POLARITY | SPI_CLOCK_PHASE | SPI_CLOCK_RATE);
    SPSR = (SPI_SPEED_MODE);
}

void MSPI_vMasterTransceiveByte(u8_t u8TransmittedData, P2VAR(u8_t) pu8ReceivedData)
{
    SPDR = u8TransmittedData;
    while (!GET_BIT(SPSR, SPIF))
        ;
    (pu8ReceivedData != NULL) && (*pu8ReceivedData = SPDR);
}

void MSPI_vSlaveTransceiveByte(u8_t u8TransmittedData, P2VAR(u8_t) pu8ReceivedData)
{
    SPDR = u8TransmittedData;

    if (GET_BIT(SPSR, SPIF))
    {
        (pu8ReceivedData != NULL) && (*pu8ReceivedData = SPDR);
    }
    else
    {
        /* Do nothing */
    }
}