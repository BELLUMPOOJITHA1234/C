#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		 if (a>c) 
		{
			printf("%d is bigger",a);
		}
	}
	if(b>c)
	{
		printf("%d is bigger",b);
	}
	else
	{
		printf("%d is bigger",c);
	}
}
