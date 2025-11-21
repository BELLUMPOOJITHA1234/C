#include<stdio.h>
int main()
{
	int n,pro=1;
	scanf("%d",&n);
	int i;
	for (i=1;i<=n;i++)
	{
		pro=pro*i;
	}
	printf("%d",pro);
	return 0;
}
