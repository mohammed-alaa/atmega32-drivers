#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/LIB/LSTD_COMPILER.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingTIMER2DelaySync_main.h"

void vTestingTIMER2DelaySync(void)
{
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);

    while (TRUE)
    {
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
        MTIMER_vDelayMS(TIMER_CHANNEL_2, 5000);

        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
        MTIMER_vDelaySec(TIMER_CHANNEL_2, 5);
    }
}