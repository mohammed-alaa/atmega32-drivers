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
 * @def REGISTER(SIZE, ADDRESS)
 * @brief Map to a certain register by its address in the memory
 * @param ADDRESS The address of the register
 * @param SIZE The size of the register
 * @return The value of the register
 */
#define REGISTER(SIZE, ADDRESS) (*(volatile P2VAR(SIZE))(ADDRESS))

/**
 * @def REGISTER_U8(ADDRESS)
 * @brief Map to a certain register by its 8-bit address in the memory (used for 8-bit registers)
 * @param ADDRESS The address of the register
 * @return The value of the register
 */
#define REGISTER_U8(ADDRESS) REGISTER(u8_t, ADDRESS)

/**
 * @def REGISTER_U16(ADDRESS)
 * @brief Map to a certain register by its 16-bit address in the memory (used for 16-bit registers)
 * @param ADDRESS The address of the register
 * @return The value of the register
 */
#define REGISTER_U16(ADDRESS) REGISTER(u16_t, ADDRESS)

/** @} */

#endif /* _LSTD_HW_REGS_H */