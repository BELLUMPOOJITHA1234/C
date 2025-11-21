#include<stdio.h>
int fact (int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
    if(n<0)
    {
    	printf("enter a non negative integer",n);
	}
	else
	{
		printf("factorial of %d=%d",n);
	}
	return 0;
}
