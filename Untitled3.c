#include<stdio.h>
int main()
{
	int n,X;
	//n=total amount
	scanf("%d",&n);
	if (n>=100 && n<=500)
	{
		X=n/100.0;
	}
     else if(n>=600 && n<=2000)
	{
		X=500/100+(n-500)/500.0;
		printf("%d",X);
	}

	else 
	{
		printf("enter multiple of 100")	;	
	}
	return 0;
}
