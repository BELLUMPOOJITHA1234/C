#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int a[x][y],i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	scanf("%d%d",&n,&m);
	int b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",b[n][m]);
		}
	}
	int k,c[x][m];
	for(i=0;i<x;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<=n;k++)
			{
				c[i][j]=a[i][j]*b[i][j];
			}
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",c[i][j]);
		}
	}
}
