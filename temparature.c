#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);

	if (T<0)
	{
			printf("it's too cold");
	}
	else if (T>10 && T<=20)
	{
			printf("it's just cold");
	}
	else if (T>20 && T<=30)
	{
			printf("it's moderate");
	}
	else if (T>30 && T<=40)
	{
			printf("it's just hot");
	}
	else if (T>40 && T<=50)
	{
			printf("it's too hot");
	}
	else 
	{
		printf("inkka perrigithey pothav T>50 anta");
	}
	return 0;
}
