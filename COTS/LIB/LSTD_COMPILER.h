/**
 * @file LSTD_COMPILER.h
 * @author Mohamed Alaa
 * @brief This file contains the compiler standard macros
 * @version 1.0
 * @date 01-23-2023
 */

#ifndef _LSTD_COMPILER_H_
#define _LSTD_COMPILER_H_

/**
 * @defgroup compiler Compiler standard macros
 * @{
 */

/**
 * @def P2VAR(vartype)
 * Declare a pointer-to-variable with the specified type
 *
 */
#define P2VAR(ptrtype) ptrtype *

/**
 * @def P2CONST(vartype)
 * Declare a constant pointer-to-variable with the specified type
 *
 */
#define P2CONST(ptrtype) const ptrtype *

/**
 * @def CONSTP2VAR(vartype)
 * Declare a pointer-to-variable constant with the specified type
 *
 */
#define CONSTP2VAR(ptrtype) ptrtype *const

/**
 * @def CONSTP2CONST(vartype)
 * Declare a constant pointer-to-variable constant with the specified type
 *
 */
#define CONSTP2CONST(ptrtype) const ptrtype *const

/**
 * @def P2FUNC(vartype)
 * Declare a pointer-to-function with the specified type
 *
 */
#define P2FUNC(rettype, fctname) rettype(*fctname)

/**
 * @def CONST(vartype)
 * Declare a standard constant variable with the specified type
 */
#define CONST(consttype) const consttype

/**
 * @def STATIC
 * Declare a standard static variable
 */
#define STATIC static

/** @} */

#endif /* _LSTD_COMPILER_H_ */