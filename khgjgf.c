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
	int n,result;
	scanf("%d",&n);
	result=(n*fact(n-1));
	if(n<0)
	{
		printf("enter non negative integer:");
	}
	else
	{
		printf("factorial of %d=%d\n",n,result);
	}
}
