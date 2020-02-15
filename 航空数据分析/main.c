#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "head.h"
int main()
{
	int a,i,L[14];
	struct data* D;
	D=(struct data*)malloc(sizeof(struct data));
	i=0;
	read(i,D);
	printf("\t\t\t _________________________________________________________________________ \n");
	printf("\t\t\t|                                  航空数据分析                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("\t\t\t|                  1.显示数据                                             |\n");
	printf("\t\t\t|                  2.计算会员入会时间距离观测窗口结束的月数               |\n");
	printf("\t\t\t|                  3.乘坐飞机次数、累计飞行里程和折扣的最大值与最小值     |\n");
	printf("\t\t\t|                  4.统计乘坐飞机次数、累计飞行里程和折扣的平均值         |\n");
	printf("\t\t\t|                    并显示高于均值或低于均值的客户信息                   |\n");
	printf("\t\t\t|                  5.对数据做标准化处理                                   |\n");
	printf("\t\t\t|                  6.数据折线图（请运行Win32项目：<航空数据分析折线图>    |\n");
	printf("\t\t\t|                  0.退出程序                                             |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	
	printf("请选择您要进行的操作\n");
	/*循环执行不同switch语句*/
	while (1)
	{
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:print(D);break;
		case 2:month(D, L); break;
		case 3:value(D); break;
		case 4:average(D); break;
		case 5:standard_data(D); break;
		//case 6:数据折线图，请运行Win32项目：<航空数据分析折线图>
		case 0:
		{
			printf("谢谢使用\n");
			free(D);
			return 0;//结束程序
		}
		}
	}
}

