#include<stdio.h>
int main()
{
	int n;
	// n=age
	scanf("%d",&n);
	if(n==0 && n<=2)
	{
		printf("infant");
	}
	else if (n>=3 && n<=12)
	{
		printf("child");
	}
	else if (n>=13 && n<=19)
	{
		printf("teen");
	}
	else if (n>=20 && n<=64)
	{
		printf("adult");
	}
	else
	{
		printf("senior");
	}
	return 0;
}
