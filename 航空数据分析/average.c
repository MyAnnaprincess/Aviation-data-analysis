/*统计乘坐飞机次数、累计飞行里程和折扣的平均值，并将高于均值或低于均值的客户信息显示在计算机屏幕上*/
#include <stdio.h>
#include "head.h"
void average(struct data* D)
{
	double average_FLIGHT_COUNT, average_SEG_KM_SUM, average_avg_discount, a = 0.0, b = 0.0, c = 0.0;
	int i, n = 0;
	for (i = 0; i < 14; i++)
	{
		a += D->FLIGHT_COUNT[i];
		b += D->SEG_KM_SUM[i];
		c += D->avg_discount[i];
	}//计算每项数据总和
	average_FLIGHT_COUNT = a / 14;
	average_SEG_KM_SUM = b / 14;
	average_avg_discount = c / 14;//计算每项数据平均值
	printf("\t\t\t _________________________________________________________________________ \n");
	printf("\t\t\t|                                  航空数据分析                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("\t\t\t|                  1.统计乘坐飞机次数、累计飞行里程和折扣的平均值         |\n");
	printf("\t\t\t|                  2.显示高于均值或低于均值的客户信息                     |\n");
	printf("\t\t\t|                  0.返回主界面                                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("请选择您要进行的操作\n");
	while (1)//循环执行不同switch语句
	{
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
		{
			printf("_____________________________________________________________________________\n");
			printf("|    | FLIGHT_COUNT乘坐飞机次数 | SEG_KM_SUM累计飞行里程 | avg_discount折扣 |\n");
			printf("|___________________________________________________________________________|\n");
			printf("|均值|        %lf         |      %lf     |     %lf     |\n", average_FLIGHT_COUNT, average_SEG_KM_SUM, average_avg_discount);
			printf("|___________________________________________________________________________|\n");
		}//打印出每项数据平均值
		break;
		case 2:
		{
			printf("\t\t\t ___________________________________________________________________\n");
			printf("\t\t\t|\t |乘坐飞机次数均值  |  累计飞行里程均值  |     折扣均值     |\n");
			printf("\t\t\t|___________________________________________________________________|\n");
			for (i = 1; i <= 14; i++)
			{
				if(i<=9)
					printf("\t\t\t| 客户%d  |", i);
				else
					printf("\t\t\t| 客户%d |", i);
				if (D->FLIGHT_COUNT[i] > average_FLIGHT_COUNT)
					printf("高于");
				else
					printf("低于");
				printf("              |");
				if(D->SEG_KM_SUM[i]> average_SEG_KM_SUM)
					printf("高于");
				else
					printf("低于");
				printf("                |");
				if(D->avg_discount[i]> average_avg_discount)
					printf("高于");
				else
					printf("低于");//依次比较大小，显示每一项值高于均值或是低于均值
				printf("              |\n");
			}
			printf("\t\t\t|___________________________________________________________________|\n");
		}
		}
		if (n == 0)
		{
			printf("您已返回主界面\n");
			break;//退出while循环
		}
	}
}