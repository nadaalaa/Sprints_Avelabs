#ifndef MCU_HW_H
#define MCU_HW_H

#include "Std_Types.h"

typedef struct 
{
    uint32 CEN       : 1;
    uint32 UDIS      : 1;
    uint32 URS       : 1;
    uint32 OPM       : 1;
    uint32           : 3; /*reserved*/
    uint32 ARPE      : 1;
    uint32           : 8; /*reserved*/
}TIMCR1_Str_BF;
typedef union
{
    TIMCR1_Str_BF B;
    uint32 R;
}TIMCR1_TAG;

#define DIO_PORT_A_BASE_ADDRESS            0x40010800uL
#define DIO_PORT_B_BASE_ADDRESS            0x40010C00uL
#define DIO_PORT_C_BASE_ADDRESS            0x40011000uL
#define DIO_PORT_D_BASE_ADDRESS            0x40011400uL
#define DIO_PORT_E_BASE_ADDRESS            0x40011800uL
#define DIO_PORT_F_BASE_ADDRESS            0x40011C00uL
#define DIO_PORT_G_BASE_ADDRESS            0x40012000uL

#define GPIO_CRL(GpioBaseAddr)             (*((volatile uint32*)(GpioBaseAddr+0x00)))
#define GPIO_CRH(GpioBaseAddr)             (*((volatile uint32*)(GpioBaseAddr+0x04)))
#define GPIO_ODR(GpioBaseAddr)             (*((volatile uint32*)(GpioBaseAddr+0x0C)))

#define TIMER_6_BASE_ADDRESS                 0x40001000uL
#define TIMER_7_BASE_ADDRESS                 0x40001400uL

#define TIM_CR1(TimerBaseAddr)              (*((volatile TIMCR1_TAG*)(TimerBaseAddr+0x00)))
#define TIM_CR2(TimerBaseAddr)              (*((volatile uint32*)(TimerBaseAddr+0x04)))
#define TIM_DIER(TimerBaseAddr)             (*((volatile uint32*)(TimerBaseAddr+0x0C)))
#define TIM_SR(TimerBaseAddr)               (*((volatile uint32*)(TimerBaseAddr+0x10)))
#define TIM_EGR(TimerBaseAddr)              (*((volatile uint32*)(TimerBaseAddr+0x14)))
#define TIM_CNT(TimerBaseAddr)              (*((volatile uint32*)(TimerBaseAddr+0x24)))
#define TIM_PSC(TimerBaseAddr)              (*((volatile uint32*)(TimerBaseAddr+0x28)))
#define TIM_ARR(TimerBaseAddr)              (*((volatile uint32*)(TimerBaseAddr+0x2C)))




#endif /*MCU_HW_H*/
