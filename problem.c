#include<stdio.h>
int main()
{
	int n,X;
	//n=total amount
	scanf("%d",&n);
	if (n>=2000)
	{
		X=n/2000.0;
	}
     else if(n<=2000 &&n>2000)
	{
		X=/100+(n-500)/500.0;
		printf("%d",X);
	}

	else 
	{
		printf("enter multiple of 100")	;	
	}
	return 0;
}
