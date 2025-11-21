#include<stdio.h>
int main()
{
	int rows,cols,i,j,sum=0;
	printf("Enter rows and cols:");
	scanf("%d%d",&rows,&cols);
	int a[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=1;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Trace of matrix: ");
	for(i=0;i<rows;i++)
	{
		sum=sum+a[i][i];
	}
	printf("Trace of matrix:%d",sum);
	return 0;
}
