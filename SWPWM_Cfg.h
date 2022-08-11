#ifndef SWPWM_CFG_H
#define SWPWM_CFG_H

/*
   Please choose one of the supported timers
*  TIMER_ID_0
*  TIMER_ID_1
*/
#define SWPWM_TIMER_SELECTOR            TIMER_ID_0
/*
    Please choose o of the support Dio Pins
*/
#define SWPWM_OUTPUT_PIN_SELECTOR       0u  /* PIN0 */
#define SWPWM_OUTPUT_PORT_SELECTOR      0u  /* PORTA */


/*The used timer prescaler shall be configured to get the following frequency in MHz*/
#define SWPWM_TIMER_FREQ_MHz             1u

/*It is required to generate PWM signal with 1KHz (period time 1000 us)*/
#define SWPWM_PWM_TOTAL_PERIOD_TIME_US   1000uL
#endif /* SWPWM_CFG_H*/