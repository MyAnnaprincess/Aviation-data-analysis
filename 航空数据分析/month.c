/*计算会员入会时间距离观测窗口结束的月数*/
#include<stdio.h>
#include "head.h"
void month(struct data* D, int L[14])
{
	int i;
	printf("     会员入会时间距离观测窗口结束的月数\n");
	for (i = 0; i < 14; i++)
	{
		L[i] = (D->LOAD_TIMEyear[i] * 12 + D->LOAD_TIMEmonth[i]) - (D->FFP_DATEyear[i] * 12 + D->FFP_DATEmonth[i]);//将年转化为月进行计算
		printf("客户%d ", i + 1);
		printf("%d\n", L[i]);
	}
	printf("\n");
}