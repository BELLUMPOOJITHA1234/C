#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r,p;
	int k,i,j;
	printf("enter 1st matrix:");
	scanf("%d%d",&r,&p);
	for(i=0;i<r;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter 2nd matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",b[i][j]);
		}
		printf("\n");
	}
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<p;j++)
	  	{
	  		c[i][j]=0;
			 for(k=0;k<p;k++)
			 {
			 	c[i][j]=a[i][k]*b[k][j];
			 }
			 printf("\n");
		  }
		  for(i=0;i<r;i++)
		  {
		  	for(j=0;j<p;j++)
		  	{
		  		printf("%d",c[i][j]);
			  }
		  }
		  print("\n");
	  }
}
