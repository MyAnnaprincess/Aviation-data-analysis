/*ͳ�Ƴ����ɻ��������ۼƷ�����̺��ۿ۵�ƽ��ֵ���������ھ�ֵ����ھ�ֵ�Ŀͻ���Ϣ��ʾ�ڼ������Ļ��*/
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
	}//����ÿ�������ܺ�
	average_FLIGHT_COUNT = a / 14;
	average_SEG_KM_SUM = b / 14;
	average_avg_discount = c / 14;//����ÿ������ƽ��ֵ
	printf("\t\t\t _________________________________________________________________________ \n");
	printf("\t\t\t|                                  �������ݷ���                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("\t\t\t|                  1.ͳ�Ƴ����ɻ��������ۼƷ�����̺��ۿ۵�ƽ��ֵ         |\n");
	printf("\t\t\t|                  2.��ʾ���ھ�ֵ����ھ�ֵ�Ŀͻ���Ϣ                     |\n");
	printf("\t\t\t|                  0.����������                                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("��ѡ����Ҫ���еĲ���\n");
	while (1)//ѭ��ִ�в�ͬswitch���
	{
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
		{
			printf("_____________________________________________________________________________\n");
			printf("|    | FLIGHT_COUNT�����ɻ����� | SEG_KM_SUM�ۼƷ������ | avg_discount�ۿ� |\n");
			printf("|___________________________________________________________________________|\n");
			printf("|��ֵ|        %lf         |      %lf     |     %lf     |\n", average_FLIGHT_COUNT, average_SEG_KM_SUM, average_avg_discount);
			printf("|___________________________________________________________________________|\n");
		}//��ӡ��ÿ������ƽ��ֵ
		break;
		case 2:
		{
			printf("\t\t\t ___________________________________________________________________\n");
			printf("\t\t\t|\t |�����ɻ�������ֵ  |  �ۼƷ�����̾�ֵ  |     �ۿ۾�ֵ     |\n");
			printf("\t\t\t|___________________________________________________________________|\n");
			for (i = 1; i <= 14; i++)
			{
				if(i<=9)
					printf("\t\t\t| �ͻ�%d  |", i);
				else
					printf("\t\t\t| �ͻ�%d |", i);
				if (D->FLIGHT_COUNT[i] > average_FLIGHT_COUNT)
					printf("����");
				else
					printf("����");
				printf("              |");
				if(D->SEG_KM_SUM[i]> average_SEG_KM_SUM)
					printf("����");
				else
					printf("����");
				printf("                |");
				if(D->avg_discount[i]> average_avg_discount)
					printf("����");
				else
					printf("����");//���αȽϴ�С����ʾÿһ��ֵ���ھ�ֵ���ǵ��ھ�ֵ
				printf("              |\n");
			}
			printf("\t\t\t|___________________________________________________________________|\n");
		}
		}
		if (n == 0)
		{
			printf("���ѷ���������\n");
			break;//�˳�whileѭ��
		}
	}
}