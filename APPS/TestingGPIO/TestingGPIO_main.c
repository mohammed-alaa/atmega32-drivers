#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "TestingGPIO_main.h"

void vTestingGPIO(void)
{
    MGPIO_vSetPinDirection(GPIO_PORTB, GPIO_PIN0, INPUT_PULLUP);
    MGPIO_vSetPinDirection(GPIO_PORTB, GPIO_PIN4, INPUT_PULLUP);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN2, INPUT_PULLUP);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN3, OUTPUT);

    while (TRUE)
    {
        if (MGPIO_vGetPinValue(GPIO_PORTB, GPIO_PIN0))
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
        }
        else
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
        }

        if (MGPIO_vGetPinValue(GPIO_PORTB, GPIO_PIN4))
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
        }
        else
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
        }

        if (MGPIO_vGetPinValue(GPIO_PORTD, GPIO_PIN2))
        {
            MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
        }
        else
        {
            MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        }
    }
}