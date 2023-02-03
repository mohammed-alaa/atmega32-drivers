#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/LIB/LSTD_COMPILER.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingTIMER0PWM_main.h"

void vTestingTIMER0PWM(void)
{
    u8_t counter = 0;
    u8_t fadeAmount = 5;
    MGPIO_vSetPinDirection(GPIO_PORTB, GPIO_PIN3, OUTPUT);

    while (TRUE)
    {
        counter += fadeAmount;
        if (counter <= 0 || counter >= 255)
        {
            fadeAmount = -fadeAmount;
        }

        MTIMER_vOutputFastPWM(TIMER_CHANNEL_0, counter);
        // MTIMER_vOutputPhaseCorrectPWM(TIMER_CHANNEL_0, counter);
        MTIMER_vDelayMS(TIMER_CHANNEL_2, 50);
    }
}