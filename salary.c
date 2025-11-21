#include<stdio.h>
int main()
{
	int basic;
	double da,hra,gross;
	scanf("%d",&basic);
	if (basic<=10000)
	{
		hra=0.2*basic;
		da=0.8*basic;
	}
	else if (basic>10000  &&  basic<=20000)
	{
		hra=0.25*basic;
		da=0.9*basic;
	}
	else 
	{
		hra=0.3*basic;
		da=0.95*basic;
	}
	gross=basic+hra+da;
	printf("basic=%d\n",basic);
	printf("hra=%.2lf\n",hra);
	printf("da=%.2lf\n",da);
	printf("gross=%.2lf",gross);
	return 0;
}

