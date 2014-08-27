

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"



GPIO_InitTypeDef GPIO_InitStructure;


int main(void)
{

       
  /* GPIOD Periph clock enable */
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

  /* Configure PD0 and PD2 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOD, &GPIO_InitStructure);


  while (1)
  {
  	 GPIO_SetBits(GPIOD, GPIO_Pin_9 | GPIO_Pin_15);
  }
}
