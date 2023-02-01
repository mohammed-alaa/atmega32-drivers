#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingTIMER_main.h"

void vTestingTIMER(void)
{
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);

    while (TRUE)
    {
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
        // MTIMER_vSyncDelayMS(TIMER_CHANNEL_0, 5000);
        MTIMER_vSyncDelayS(TIMER_CHANNEL_0, 5);
        // MTIMER_vSyncDelay(TIMER_CHANNEL_0, TIMER_MODE_CTC, TIMER_PRESCALER_64, 1250000);

        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
        // MTIMER_vSyncDelayMS(TIMER_CHANNEL_0, 5000);
        MTIMER_vSyncDelayS(TIMER_CHANNEL_0, 5);
        // MTIMER_vSyncDelay(TIMER_CHANNEL_0, TIMER_MODE_CTC, TIMER_PRESCALER_64, 1250000);
    }
}