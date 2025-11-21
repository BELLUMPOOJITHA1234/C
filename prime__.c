#include<stdio.h>
int main()
{
	int n,m,i,a=1;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		for(i=2;i<=m/2;i++)
		{
			if(n%i==0)
			{
				a++;	
			}
		}
	}
	if(a==2)
	{
		printf("prime");
	}
	else
	{
		printf("Not prime");
	}
	return 0;
}
