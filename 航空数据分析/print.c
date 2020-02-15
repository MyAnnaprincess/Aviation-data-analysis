/*´òÓ¡Êý¾Ý*/
#include <stdio.h>
#include "head.h"
void print(struct data* D)
{
	int i;
	printf("________________________________________________________________________________________________________________ \n");
	printf("|FFP_DATEyear	|FFP_DATEmonth	|LOAD_TIMEyear	|LOAD_TIMEmonth	|FLIGHT_COUNT	|SEG_KM_SUM	|avg_discount	|\n");
	for(i=0;i<14;i++)
	printf("|%d		|%d		|%d		|%d		|%d		|%d		|%lf	|\n",D->FFP_DATEyear[i],D->FFP_DATEmonth[i],D->LOAD_TIMEyear[i],D->LOAD_TIMEmonth[i],D->FLIGHT_COUNT[i],D->SEG_KM_SUM[i],D->avg_discount[i]);
	printf("________________________________________________________________________________________________________________ \n");
}