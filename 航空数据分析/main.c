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
	printf("\t\t\t|                                  �������ݷ���                           |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	printf("\t\t\t|                  1.��ʾ����                                             |\n");
	printf("\t\t\t|                  2.�����Ա���ʱ�����۲ⴰ�ڽ���������               |\n");
	printf("\t\t\t|                  3.�����ɻ��������ۼƷ�����̺��ۿ۵����ֵ����Сֵ     |\n");
	printf("\t\t\t|                  4.ͳ�Ƴ����ɻ��������ۼƷ�����̺��ۿ۵�ƽ��ֵ         |\n");
	printf("\t\t\t|                    ����ʾ���ھ�ֵ����ھ�ֵ�Ŀͻ���Ϣ                   |\n");
	printf("\t\t\t|                  5.����������׼������                                   |\n");
	printf("\t\t\t|                  6.��������ͼ��������Win32��Ŀ��<�������ݷ�������ͼ>    |\n");
	printf("\t\t\t|                  0.�˳�����                                             |\n");
	printf("\t\t\t|_________________________________________________________________________|\n");
	
	printf("��ѡ����Ҫ���еĲ���\n");
	/*ѭ��ִ�в�ͬswitch���*/
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
		//case 6:��������ͼ��������Win32��Ŀ��<�������ݷ�������ͼ>
		case 0:
		{
			printf("ллʹ��\n");
			free(D);
			return 0;//��������
		}
		}
	}
}

