#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int i;
	for (i=0;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("%d",sum);
	return 0;
}
