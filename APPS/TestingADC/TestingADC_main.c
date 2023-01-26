#include "../../COTS/LIB/LSTD_TYPES.h"
#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/ADC/ADC_interface.h"

void vTestingADC(void)
{
    u16_t L_u16Result = 0;
    MGPIO_vSetPinDirection(GPIO_PORTA, GPIO_PIN1, INPUT_PULLDOWN);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN3, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);
    MADC_vInit();

    while (TRUE)
    {
        L_u16Result = MADC_u16ReadChannel(ADC_CHANNEL_1, ADC_PRESCALER_16);

        if (L_u16Result >= 250 && L_u16Result < 600)
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
            MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        }
        else if (L_u16Result >= 600 && L_u16Result < 1024)
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
            MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
        }
        else
        {
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
            MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
            MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        }
    }
}