# Testing applications

These testing applications to test most of the drivers' functionalities and make sure they do what they intend to do.

## Applications list
---

Below is the applications list and will follow this template of describing each application.

```
Name: <Application name>
Description: <Application description>
Activision Macro: <Application macro name>
```
Testing application's directory has the following structure:

```
- APPS_main.h
- APPS_main.c
- <Application name>/
    - <Application name>_main.h
    - <Application name>_main.c
```

### TestingGPIO
---
```
Name: TestingGPIO
Description: Testing the General Purpose Input Output peripheral by turning on LED when a push button press is detected
Activision Macro: TESTING_GPIO
```

### TestingEXTI
---
```
Name: TestingEXTI
Description: Testing the External Interrupt peripheral by turning on LED when an external interrupt is detected
Activision Macro: TESTING_EXTI
```

### TestingADC
---
```
Name: TestingADC
Description: Testing the Analog-to-Digital peripheral by turning on LED when an analog input exceeds a certain value
Activision Macro: TESTING_ADC
```

### TestingTIMER0DelaySync
---
```
Name: TestingTIMER0DelaySync
Description: Testing the Timer peripheral channel 0 by turning a certain LED(s) ON and OFF with a delay in between
Activision Macro: TESTING_ADC
```

### TestingTIMER0DelaySync
---
```
Name: TestingTIMER0DelaySync
Description: Testing the Timer peripheral channel 0 by turning a certain LED(s) ON and OFF with a delay in between
Activision Macro: TESTING_TIMER0DELAYSYNC
```

### TestingTIMER1DelaySync
---
```
Name: TestingTIMER1DelaySync
Description: Testing the Timer peripheral channel 1A by turning a certain LED(s) ON and OFF with a delay in between
Activision Macro: TESTING_TIMER1DELAYSYNC
```

### TestingTIMER2DelaySync
---
```
Name: TestingTIMER2DelaySync
Description: Testing the Timer peripheral channel 2 by turning a certain LED(s) ON and OFF with a delay in between
Activision Macro: TESTING_TIMER2DELAYSYNC
```

### TestingTIMER0PWM
---
```
Name: TestingTIMER0PWM
Description: Testing the Timer 0 peripheral PWM modes
Activision Macro: TESTING_TIMER0PWM
```

### TestingTIMER1APWM
---
```
Name: TestingTIMER1APWM
Description: Testing the Timer 1 peripheral channel A PWM modes
Activision Macro: TESTING_TIMER1APWM
```

### TestingTIMER1BPWM
---
```
Name: TestingTIMER1BPWM
Description: Testing the Timer 1 peripheral channel B PWM modes
Activision Macro: TESTING_TIMER1BPWM
```

### TestingTIMER2PWM
---
```
Name: TestingTIMER2PWM
Description: Testing the Timer 2 peripheral PWM modes
Activision Macro: TESTING_TIMER2PWM
```