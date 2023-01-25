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
 * @def CONST(vartype)
 * @brief Declare a standard constant variable with the specified type
 */
#define CONST const

/**
 * @def STATIC
 * @brief Declare a standard static variable
 */
#define STATIC static

/**
 * @def P2VAR(vartype)
 * @brief Declare a pointer-to-variable with the specified type
 */
#define P2VAR(ptrtype) ptrtype *

/**
 * @def P2CONST(vartype)
 * @brief Declare a constant pointer-to-variable with the specified type
 */
#define P2CONST(ptrtype) CONST ptrtype *

/**
 * @def CONSTP2VAR(vartype)
 * @brief Declare a pointer-to-variable constant with the specified type
 */
#define CONSTP2VAR(ptrtype) ptrtype *CONST

/**
 * @def CONSTP2CONST(vartype)
 * @brief Declare a constant pointer-to-variable constant with the specified type
 */
#define CONSTP2CONST(ptrtype) CONST ptrtype *CONST

/**
 * @def P2FUNC(vartype)
 * @brief Declare a pointer-to-function with the specified type
 */
#define P2FUNC(rettype, fctname) rettype(*fctname)

/** @} */

#endif /* _LSTD_COMPILER_H_ */