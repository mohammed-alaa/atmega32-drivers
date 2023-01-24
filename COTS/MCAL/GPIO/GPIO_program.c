/**
 * @file GPIO_program.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the GPIO peripheral
 * @version 1.0
 * @date 2023-01-24
 * @copyright Copyright (c) 2023
 */

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"

void MGPIO_vSetPinDirection(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8Direction)
{
    switch (L_u8Port)
    {
    case GPIO_PORTA:
        switch (L_u8Direction)
        {
        case INPUT_PULLUP:
            CLEAR_BIT(DDRA, L_u8Pin);
            SET_BIT(PORTA, L_u8Pin);
            break;
        case INPUT_PULLDOWN:
            CLEAR_BIT(DDRA, L_u8Pin);
            CLEAR_BIT(PORTA, L_u8Pin);
            break;
        case OUTPUT:
            SET_BIT(DDRA, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTB:
        switch (L_u8Direction)
        {
        case INPUT_PULLUP:
            CLEAR_BIT(DDRB, L_u8Pin);
            SET_BIT(PORTB, L_u8Pin);
            break;
        case INPUT_PULLDOWN:
            CLEAR_BIT(DDRB, L_u8Pin);
            CLEAR_BIT(PORTB, L_u8Pin);
            break;
        case OUTPUT:
            SET_BIT(DDRB, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTC:
        switch (L_u8Direction)
        {
        case INPUT_PULLUP:
            CLEAR_BIT(DDRC, L_u8Pin);
            SET_BIT(PORTC, L_u8Pin);
            break;
        case INPUT_PULLDOWN:
            CLEAR_BIT(DDRC, L_u8Pin);
            CLEAR_BIT(PORTC, L_u8Pin);
            break;
        case OUTPUT:
            SET_BIT(DDRC, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTD:
        switch (L_u8Direction)
        {
        case INPUT_PULLUP:
            CLEAR_BIT(DDRD, L_u8Pin);
            SET_BIT(PORTD, L_u8Pin);
            break;
        case INPUT_PULLDOWN:
            CLEAR_BIT(DDRD, L_u8Pin);
            CLEAR_BIT(PORTD, L_u8Pin);
            break;
        case OUTPUT:
            SET_BIT(DDRD, L_u8Pin);
            break;
        }
        break;
    }
}

void MGPIO_vSetPinValue(u8_t L_u8Port, u8_t L_u8Pin, u8_t L_u8PinValue)
{
    switch (L_u8Port)
    {
    case GPIO_PORTA:
        switch (L_u8PinValue)
        {
        case LOW:
            CLEAR_BIT(PORTA, L_u8Pin);
            break;
        case HIGH:
            SET_BIT(PORTA, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTB:
        switch (L_u8PinValue)
        {
        case LOW:
            CLEAR_BIT(PORTB, L_u8Pin);
            break;
        case HIGH:
            SET_BIT(PORTB, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTC:
        switch (L_u8PinValue)
        {
        case LOW:
            CLEAR_BIT(PORTC, L_u8Pin);
            break;
        case HIGH:
            SET_BIT(PORTC, L_u8Pin);
            break;
        }
        break;
    case GPIO_PORTD:
        switch (L_u8PinValue)
        {
        case LOW:
            CLEAR_BIT(PORTD, L_u8Pin);
            break;
        case HIGH:
            SET_BIT(PORTD, L_u8Pin);
            break;
        }
        break;
    }
}

u8_t MGPIO_vGetPinValue(u8_t L_u8Port, u8_t L_u8Pin)
{
    u8_t L_u8PinValue = 0;
    switch (L_u8Port)
    {
    case GPIO_PORTA:
        L_u8PinValue = GET_BIT(PINA, L_u8Pin);
        break;
    case GPIO_PORTB:
        L_u8PinValue = GET_BIT(PINB, L_u8Pin);
        break;
    case GPIO_PORTC:
        L_u8PinValue = GET_BIT(PINC, L_u8Pin);
        break;
    case GPIO_PORTD:
        L_u8PinValue = GET_BIT(PIND, L_u8Pin);
        break;
    }

    return L_u8PinValue;
}