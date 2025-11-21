#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
	int r,s;
	scanf("%d%d",&r,&s);
	int b[r][s];
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=s-1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int p,q,c[p][q];
	for(i=0;i<=p-1;i++)
	{
		for(j=0;j<=q-1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<=p-1;i++)
	{
		for(j=0;j<=q-1;j++)
		{
			printf("%d",c[i][j]);	
		}
	}
		
}
