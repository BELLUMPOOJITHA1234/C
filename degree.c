#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	if (T<0)
	{
		printf("it is too cold");
	}
	else if(T>0 && T<=20)
    {
    	printf("it is cool");
	}
	else if (T>20 && T<=30)
	{
		printf("it is moderate");
	}
	else if (T>30 && T<=40)
	{
		printf("it is just hot");
	}
	else if(T>40 && T<=50)
	{
		printf("it is too hot");
	}
	else 
	{
		printf(" enter valid temparature");
	}
	return 0;
}
