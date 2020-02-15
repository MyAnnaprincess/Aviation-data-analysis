/*乘坐飞机次数、累计飞行里程和折扣的最大值与最小值并进行显示*/
#include <stdio.h>
#include "head.h"
void value(struct data* D)
{
	int i, a1 = D->FLIGHT_COUNT[0], b1 = D->SEG_KM_SUM[0], a2 = D->FLIGHT_COUNT[0], b2 = D->SEG_KM_SUM[0];
	double c1 = D->avg_discount[0], c2 = D->avg_discount[0];
	printf(" 乘坐飞机次数、累计飞行里程和折扣的最大值与最小值\n");
	printf("_________________________________________________\n");
	printf("|\t\t|最大值\t\t|最小值\t\t|\n");
	for (i = 0; i < 14; i++)
	{
		if (D->FLIGHT_COUNT[i] >= a1)
			a1 = D->FLIGHT_COUNT[i];
		if (D->FLIGHT_COUNT[i] <= a2)
			a2 = D->FLIGHT_COUNT[i];
		if (D->SEG_KM_SUM[i] >= b1)
			b1 = D->SEG_KM_SUM[i];
		if (D->SEG_KM_SUM[i] <= b2)
			b2 = D->SEG_KM_SUM[i];
		if (D->avg_discount[i] >= c1)
			c1 = D->avg_discount[i];
		if (D->avg_discount[i] <= c2)
			c2 = D->avg_discount[i];
	}//for循环和if语句依次比较大小，输出最大值与最小值
	printf("|乘坐飞机次数\t|%d\t\t|%d\t\t|\n|累计飞行里程\t|%d\t\t|%d\t\t|\n|折扣\t\t|%lf\t|%lf\t|\n", a1,a2,b1,b2,c1,c2);
	printf("|_______________________________________________|\n");
}