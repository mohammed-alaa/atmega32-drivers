#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/EXTI/EXTI_interface.h"
#include "TestingEXTI_main.h"

void vToggleLed(void)
{
    MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
    MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
    MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
    MEXTI_vDisableExternalInterrupt(EXTI_PIN_INT0);
}

void vTestingEXTI(void)
{
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN2, INPUT_PULLUP);

    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN3, OUTPUT);

    MEXTI_vEnableExternalInterrupt(EXTI_PIN_INT0, EXTI_MODES_FALLING_EDGE, vToggleLed);

    while (TRUE)
    {
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
        MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
    }
}