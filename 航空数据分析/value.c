/*�����ɻ��������ۼƷ�����̺��ۿ۵����ֵ����Сֵ��������ʾ*/
#include <stdio.h>
#include "head.h"
void value(struct data* D)
{
	int i, a1 = D->FLIGHT_COUNT[0], b1 = D->SEG_KM_SUM[0], a2 = D->FLIGHT_COUNT[0], b2 = D->SEG_KM_SUM[0];
	double c1 = D->avg_discount[0], c2 = D->avg_discount[0];
	printf(" �����ɻ��������ۼƷ�����̺��ۿ۵����ֵ����Сֵ\n");
	printf("_________________________________________________\n");
	printf("|\t\t|���ֵ\t\t|��Сֵ\t\t|\n");
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
	}//forѭ����if������αȽϴ�С��������ֵ����Сֵ
	printf("|�����ɻ�����\t|%d\t\t|%d\t\t|\n|�ۼƷ������\t|%d\t\t|%d\t\t|\n|�ۿ�\t\t|%lf\t|%lf\t|\n", a1,a2,b1,b2,c1,c2);
	printf("|_______________________________________________|\n");
}