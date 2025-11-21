#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
	printf("enter the size of matrix a \n",r1,c1);
	scanf("%d%d",&r1,&c1);
	prinf("enter the size of matrix b \n",r2,c2);
	scanf("%d%d",&r2,&c2);
	printf("enter matrix a elements \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix b elements \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("matrix a \n");
	{
	for(i=r1;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n");
}
printf("matrix b \n");
{
	for(i=r2;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	printf("\n");
}
printf("matrix c \n");
{
	for(i=r1;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
}
return 0;
}