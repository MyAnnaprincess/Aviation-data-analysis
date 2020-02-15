/*对数据做标准化处理*/
#include <stdio.h>
#include <math.h>
#include "head.h"
void standard_data(struct data* D)
{
	double average_FLIGHT_COUNT, average_SEG_KM_SUM, average_avg_discount,
		a = 0, b = 0, c = 0, g = 0, e = 0, f = 0,
		σ1, σ2, σ3,
		x[14],y[14],z[14];
	int i;
	for (i = 0; i < 14; i++)
	{
		a += D->FLIGHT_COUNT[i];
		b += D->SEG_KM_SUM[i];
		c += D->avg_discount[i];
		x[i] = D->FLIGHT_COUNT[i];
		y[i] = D->SEG_KM_SUM[i];
		z[i] = D->avg_discount[i];
	}//计算每项数据总和
	average_FLIGHT_COUNT = a / 14;
	average_SEG_KM_SUM = b / 14;
	average_avg_discount = c / 14;//计算每项数据平均值
	for (i = 0; i < 14; i++)
	{
		g += pow(D->FLIGHT_COUNT[i] - average_FLIGHT_COUNT, 2.0);
		e += pow(D->SEG_KM_SUM[i] - average_SEG_KM_SUM, 2.0);
		f += pow(D->avg_discount[i] - average_avg_discount, 2.0);
	}//计算∑（x-`x)^2
	σ1 = sqrt(g / 14);
	σ2 = sqrt(e/ 14);
	σ3 = sqrt(f / 14);//计算标准差
	for (i = 0; i < 14; i++)
	{
		x[i] = (D->FLIGHT_COUNT[i] - average_FLIGHT_COUNT) / σ1;
		y[i] = (D->SEG_KM_SUM[i] - average_SEG_KM_SUM) / σ2;
		z[i] = (D->avg_discount[i] - average_avg_discount) / σ3;
	}//对数据进行标准化处理
	printf("                        _________________________________________________________________________________\n");
	printf("                        |                                 标准化数据                                    |\n");
	printf("                        |_______________________________________________________________________________|\n");
	printf("                        |        |     乘坐飞机次数     |      累计飞行里程     |          折扣         |\n");
	for (i = 0; i < 14; i++)
	{
		if(i<9)
			printf("                        | 客户%d  |	%lf	|	%lf	|	%lf	|\n", i+1,x[i],y[i],z[i]);
		else
			printf("                        | 客户%d |	%lf	|	%lf	|	%lf	|\n", i + 1, x[i], y[i], z[i]);
	}
	printf("                        |_______________________________________________________________________________|\n");
}