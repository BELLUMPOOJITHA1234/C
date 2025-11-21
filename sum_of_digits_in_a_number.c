#include<stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	while (n>0);
	{
		int g=n%10;
		sum=sum+g;
		n=n/10;	
	}
	printf("%d",sum);	
}
