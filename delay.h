
#ifndef DELAY_H_
#define DELAY_H_

#include <stdint.h>


//#define TIMER1
//#define TIMER2
// #define TIMER3
#define TIMER4

#ifdef TIMER1
#define CURRENT_TIMER               ((TIM_TypeDef *) TIM1)
#endif

#ifdef TIMER2
#define CURRENT_TIMER               ((TIM_TypeDef *) TIM2)
#endif

#ifdef TIMER3
#define CURRENT_TIMER               ((TIM_TypeDef *) TIM3)
#endif

#ifdef TIMER4
#define CURRENT_TIMER               ((TIM_TypeDef *) TIM4)
#endif

#define CURRENT_FREQ				SystemCoreClock

void delayInit(void);
void delayDeInit(void);
void delayMs(volatile uint32_t delay);
void delayUs(volatile uint32_t delay);

#endif /* DELAY_H_ */