#include "stm32f4xx.h"

int main(void)
{
   RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
  GPIO_InitTypeDef GPIO_InitStruct;

  GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_5;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;


 GPIO_Init(GPIOA, &GPIO_InitStruct);

//GPIO_ResetBits(GPIOA, GPIO_Pin_5);


  while(1)
  {

    GPIO_SetBits(GPIOA, GPIO_Pin_5);
  }
}
