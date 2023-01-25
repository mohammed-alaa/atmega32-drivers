/**
 * @file LSTD_VALUES.h
 * @author Mohamed Alaa
 * @brief This file contains the standard values
 * @version 1.0
 * @date 01-23-2023
 */

#ifndef _LSTD_VALUES_H_
#define _LSTD_VALUES_H_

#include "LSTD_COMPILER.h"

/**
 * @defgroup standardvalues Standard values
 * @{
 */

#ifndef TRUE
/**
 * @def TRUE
 * @brief Type definition for TRUE
 */
#define TRUE (1)
#endif /* ifndef TRUE */

#ifndef FALSE
/**
 * @def FALSE
 * @brief Type definition for FALSE
 */
#define FALSE (0)
#endif /* ifndef FALSE */

#ifndef NULL
/**
 * @def NULL
 * @brief Type definition for NULL
 */
#define NULL ((P2VAR(void)) 0)
#endif /* ifndef NULL */

/** @} */

#endif /* _LSTD_VALUES_H_ */