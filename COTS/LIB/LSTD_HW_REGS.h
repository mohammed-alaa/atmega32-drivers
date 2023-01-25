/**
 * @file LSTD_HW_REGS.h
 * @author Mohamed Alaa
 * @brief This file contains the hardware registers macro-functions for memory addresses mapping
 * @version 1.0
 * @date 01-23-2023
 */

#ifndef _LSTD_HW_REGS_H
#define _LSTD_HW_REGS_H

#include "LSTD_TYPES.h"
#include "LSTD_COMPILER.h"

/**
 * @defgroup hw_registers Hardware registers macro-functions
 * These macro-functions help in the mapping of memory addresses of the registers
 * @{
 */

/**
 * @def REGISTER(ADDRESS)
 * @brief Map to a certain register by its address in the memory
 */
#define REGISTER(ADDRESS) (*(volatile P2VAR(u8_t)) (ADDRESS))

/** @} */

#endif /* _LSTD_HW_REGS_H */