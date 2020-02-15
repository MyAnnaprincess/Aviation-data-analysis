/*读取文件*/
#include <stdio.h>
#include "head.h"
void read(int i,struct data* D)
{
	FILE* fp;
	errno_t err= fopen_s(&fp,"input.txt", "r");//读取txt文件
	if (fp == NULL) 
	{
			puts("不能打开文件！");
	}//若返回NULL，则打开文件失败
	for(i=0;i<14;i++)
	{
		fscanf_s(fp, "%d	%d	%d	%d	%d	%d	%lf",&D->FFP_DATEyear[i],&D->FFP_DATEmonth[i],&D->LOAD_TIMEyear[i],&D->LOAD_TIMEmonth[i],&D->FLIGHT_COUNT[i],&D->SEG_KM_SUM[i],&D->avg_discount[i]);
	}//将txt文件中的数据赋值给数组
		if (fp != NULL)
	{
		fclose(fp);
	}//读取完毕，关闭文件
}