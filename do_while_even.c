#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	do
	{
		printf("%d ",i);
		i=i+3;
	}while(i<=n);
	printf("\n Task completed");
}
