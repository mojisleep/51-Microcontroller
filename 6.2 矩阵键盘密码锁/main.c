#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned int jiamwei=0;
unsigned int mima=0;
unsigned int c=0;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
	{
		jiamwei=MatrixKey();
		if (jiamwei!=0)
			{
				if (jiamwei<=10)
				{
					if (c<4)
					{
						mima*=10;
						mima+=jiamwei%10;
						c++;
					}
					LCD_ShowNum(1,11,mima,4);
				}
					if (jiamwei==11)
					{
						if (mima==1211)
						{
							LCD_ShowString(2,1,"okkkk");
							mima=0;
							c=0;
							LCD_ShowNum(1,11,mima,4);
						}
						else
						{
							LCD_ShowString(2,1,"error");
							mima=0;
							c=0;
							LCD_ShowNum(1,11,mima,4);
						}
					}
					if (jiamwei==12)
					{
						mima=0;
						c=0;
						LCD_ShowNum(1,11,mima,4);
					}
			}
	}
}