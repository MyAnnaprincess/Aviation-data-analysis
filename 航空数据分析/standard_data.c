/*����������׼������*/
#include <stdio.h>
#include <math.h>
#include "head.h"
void standard_data(struct data* D)
{
	double average_FLIGHT_COUNT, average_SEG_KM_SUM, average_avg_discount,
		a = 0, b = 0, c = 0, g = 0, e = 0, f = 0,
		��1, ��2, ��3,
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
	}//����ÿ�������ܺ�
	average_FLIGHT_COUNT = a / 14;
	average_SEG_KM_SUM = b / 14;
	average_avg_discount = c / 14;//����ÿ������ƽ��ֵ
	for (i = 0; i < 14; i++)
	{
		g += pow(D->FLIGHT_COUNT[i] - average_FLIGHT_COUNT, 2.0);
		e += pow(D->SEG_KM_SUM[i] - average_SEG_KM_SUM, 2.0);
		f += pow(D->avg_discount[i] - average_avg_discount, 2.0);
	}//����ƣ�x-`x)^2
	��1 = sqrt(g / 14);
	��2 = sqrt(e/ 14);
	��3 = sqrt(f / 14);//�����׼��
	for (i = 0; i < 14; i++)
	{
		x[i] = (D->FLIGHT_COUNT[i] - average_FLIGHT_COUNT) / ��1;
		y[i] = (D->SEG_KM_SUM[i] - average_SEG_KM_SUM) / ��2;
		z[i] = (D->avg_discount[i] - average_avg_discount) / ��3;
	}//�����ݽ��б�׼������
	printf("                        _________________________________________________________________________________\n");
	printf("                        |                                 ��׼������                                    |\n");
	printf("                        |_______________________________________________________________________________|\n");
	printf("                        |        |     �����ɻ�����     |      �ۼƷ������     |          �ۿ�         |\n");
	for (i = 0; i < 14; i++)
	{
		if(i<9)
			printf("                        | �ͻ�%d  |	%lf	|	%lf	|	%lf	|\n", i+1,x[i],y[i],z[i]);
		else
			printf("                        | �ͻ�%d |	%lf	|	%lf	|	%lf	|\n", i + 1, x[i], y[i], z[i]);
	}
	printf("                        |_______________________________________________________________________________|\n");
}