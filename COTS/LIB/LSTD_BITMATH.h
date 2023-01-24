/**
 * @file LSTD_BITMATH.h
 * @author Mohamed Alaa
 * @brief This file contains the bit math manipulation macro-functions
 * @version 1.0
 * @date 01-23-2023
 */

#ifndef _LSTD_BITMATH_H_
#define _LSTD_BITMATH_H_

/**
 * @defgroup bitmath Bit Manipulation Math Macros
 * @{
 */

/**
 * @def SET_BIT(REG, BITNUM)
 * Set a certain bit's value
 */
#define SET_BIT(REG, BITNUM) (REG) |= (1<<(BITNUM))

/**
 * @def CLEAR_BIT(REG, BITNUM)
 * Clear a certain bit's value to
 */
#define CLEAR_BIT(REG, BITNUM) (REG) &= ~(1<<(BITNUM))

/**
 * @def TOGGLE_BIT(REG, BITNUM)
 * Toggle a bit to `0` if it's `1`, `1` otherwise
 */
#define TOGGLE_BIT(REG, BITNUM) (REG) ^= (1<<(BITNUM))

/**
 * @def GET_BIT(REG, BITNUM)
 * Return the value of the bit whether it's `1` or `0`
 */
#define GET_BIT(REG, BITNUM) (((REG)>>(BITNUM)) & 1)

/** @} */

/**
 * @defgroup bitmathgroup Bit Group Manipulation Math Macros
 * @{
 */

/**
 * @def SET_BITs(REG, BITS, BITNUM, FACTOR)
 * Sets the values of a group of bits
 */
// #define SET_BITs(REG, BITS, BITNUM, FACTOR) (REG) |= ((BITS)<<(BITNUM * FACTOR))

/**
 * @def CLEAR_BITs(REG, bits, BITNUM, FACTOR)
 * Clears the value of a group of bits
 */
// #define CLEAR_BITs(REG, BITS, BITNUM, FACTOR) (REG) &= ~((BITS)<<(BITNUM * FACTOR))

/**
 * @def TOGGLE_BITs(REG, bits, BITNUM, FACTOR)
 * Toggle the value of a group of bits
 */
// #define TOGGLE_BITs(REG, BITS, BITNUM, FACTOR) (REG) ^= ((BITS)<<(BITNUM * FACTOR))

/**
 * @def GET_BITs(REG, bits, BITNUM, FACTOR)
 * Return the value of a group of bits
 */
// #define GET_BITs(REG, BITS, BITNUM, FACTOR) (((REG)>>(BITNUM * FACTOR)) & (BITS))

/** @} */

#endif /* _LSTD_BITMATH_H_ */