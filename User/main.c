

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"



GPIO_InitTypeDef GPIO_InitStructure;


void delay(int delaytime)
{
    int i = 0;
    while(--delaytime)
    {
        for(i = 0; i<5000;i++){}
    }
}


int main(void)
{

  /* GPIOD Periph clock enable */
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

  /* Configure PD0 and PD2 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOC, &GPIO_InitStructure);


  while (1)
  {
    GPIO_SetBits(GPIOC, GPIO_Pin_13);
    delay(1000);
      GPIO_ResetBits(GPIOC, GPIO_Pin_13);
      delay(1000);
      
  }
}

