#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The given matrix is:");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("%d ",arr[i][j]);
		}		
	}
	return 0;
}
