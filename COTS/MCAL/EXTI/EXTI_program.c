/**
 * @file EXTI_program.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the EXTI peripheral
 * @version 1.0
 * @date 2023-01-25
 * @copyright Copyright (c) 2023
 */

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_VALUES.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "../../LIB/LSTD_COMPILER.h"
#include "../../LIB/L_INTERRUPTS.h"
#include "EXTI_private.h"
#include "EXTI_interface.h"

/**
 * @brief Static global variable used to carry the address of the callback ISR function for INT0
 * @details This variable is used to carry the address of the callback ISR function for INT0
 */
STATIC P2FUNC(void, GSP_vExtIntCallback_Int0)(void);

/**
 * @brief Static global variable used to carry the address of the callback ISR function for INT1
 * @details This variable is used to carry the address of the callback ISR function for INT1
 */
STATIC P2FUNC(void, GSP_vExtIntCallback_Int1)(void);

/**
 * @brief Static global variable used to carry the address of the callback ISR function for INT2
 * @details This variable is used to carry the address of the callback ISR function for INT2
 */
STATIC P2FUNC(void, GSP_vExtIntCallback_Int2)(void);

void MEXTI_vEnableExternalInterrupt(u8_t L_u8ExtnalInterruptPin, u8_t L_u8InterruptMode, P2FUNC(void, P_vExtIntCallback)(void))
{
    switch (L_u8ExtnalInterruptPin)
    {
    case EXTI_PIN_INT2:
        GSP_vExtIntCallback_Int2 = P_vExtIntCallback;
        if (GET_BIT(L_u8InterruptMode, 0))
        {
            SET_BIT(MCUCSR, 6);
        }
        else
        {
            CLEAR_BIT(MCUCSR, 6);
        }
        break;
    case EXTI_PIN_INT1:
        GSP_vExtIntCallback_Int1 = P_vExtIntCallback;
        MCUCR &= 0xF3;
        MCUCR |= (L_u8InterruptMode << 2);
        break;
    case EXTI_PIN_INT0:
        GSP_vExtIntCallback_Int0 = P_vExtIntCallback;
        MCUCR &= 0xFC;
        MCUCR |= L_u8InterruptMode;
        break;
    }

    SET_BIT(SREG, 7);
    SET_BIT(GICR, L_u8ExtnalInterruptPin);
}

void MEXTI_vDisableExternalInterrupt(u8_t L_u8ExtnalInterruptPin)
{
    CLEAR_BIT(GICR, L_u8ExtnalInterruptPin);

    switch (L_u8ExtnalInterruptPin)
    {
    case EXTI_PIN_INT2:
        GSP_vExtIntCallback_Int0 = NULL;
        break;
    case EXTI_PIN_INT1:
        GSP_vExtIntCallback_Int1 = NULL;
        break;
    case EXTI_PIN_INT0:
        GSP_vExtIntCallback_Int2 = NULL;
        break;
    }
}

ISR(EXTI_VECT_INT0)
{
    if (GSP_vExtIntCallback_Int0 != NULL)
    {
        /* Do nothing */
    }
    else
    {
        GSP_vExtIntCallback_Int0();
    }
}

ISR(EXTI_VECT_INT1)
{
    if (GSP_vExtIntCallback_Int1 != NULL)
    {
        /* Do nothing */
    }
    else
    {
        GSP_vExtIntCallback_Int1();
    }
}

ISR(EXTI_VECT_INT2)
{
    if (GSP_vExtIntCallback_Int2 == NULL)
    {
        /* Do nothing */
    }
    else
    {
        GSP_vExtIntCallback_Int2();
    }
}