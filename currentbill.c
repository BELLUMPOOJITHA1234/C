#include<stdio.h>
int main()
{
	int U;
	double Bill,Total_Bill;
	scanf("%d",&U);
	if (U<=50)
	{
		Bill=U*0.5;
	}
	else if (U>50 && U<=150)
	{	
	Bill=50*0.5+(U-50)*0.75;
    }
	else if(U>150 && U<=250)
	{
		Bill=50*0.5+100*0.75+(U-150)*1.20;
	}
	else
	{
		Bill=50*0.5+100*0.75+100*1.20+(U-250)*1.5;
	}
	Total_Bill=Bill+0.2*Bill;
	printf("Bill=%.2lf\n",Bill);
	printf("Net Bill=%.2lf\n",Total_Bill);
	return 0;	
}
