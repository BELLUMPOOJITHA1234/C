#include<stdio.h>
int main()
{
	int n,k;
	int i,j;
	int a=0,o=0,x=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((i&j)<k&&(i&j)>a)
				a=i&j;
			if((i|j)<k&&(i|j)>o)
				o=i|j;
			if((i^j)<k&&(i^j)>x)
				x=i^j;
		}
	}
	printf("%d %d %d",a,o,x);
	return 0;
}
