/*��ȡ�ļ�*/
#include <stdio.h>
#include "head.h"
void read(int i,struct data* D)
{
	FILE* fp;
	errno_t err= fopen_s(&fp,"input.txt", "r");//��ȡtxt�ļ�
	if (fp == NULL) 
	{
			puts("���ܴ��ļ���");
	}//������NULL������ļ�ʧ��
	for(i=0;i<14;i++)
	{
		fscanf_s(fp, "%d	%d	%d	%d	%d	%d	%lf",&D->FFP_DATEyear[i],&D->FFP_DATEmonth[i],&D->LOAD_TIMEyear[i],&D->LOAD_TIMEmonth[i],&D->FLIGHT_COUNT[i],&D->SEG_KM_SUM[i],&D->avg_discount[i]);
	}//��txt�ļ��е����ݸ�ֵ������
		if (fp != NULL)
	{
		fclose(fp);
	}//��ȡ��ϣ��ر��ļ�
}