/*�����Ա���ʱ�����۲ⴰ�ڽ���������*/
#include<stdio.h>
#include "head.h"
void month(struct data* D, int L[14])
{
	int i;
	printf("     ��Ա���ʱ�����۲ⴰ�ڽ���������\n");
	for (i = 0; i < 14; i++)
	{
		L[i] = (D->LOAD_TIMEyear[i] * 12 + D->LOAD_TIMEmonth[i]) - (D->FFP_DATEyear[i] * 12 + D->FFP_DATEmonth[i]);//����ת��Ϊ�½��м���
		printf("�ͻ�%d ", i + 1);
		printf("%d\n", L[i]);
	}
	printf("\n");
}