#include<stdio.h>
int main()
{
	int row1,col1,row2,col2,i,j,k;
	scanf("%d%d%d%d",&row1,&col1,&row2,&col2);
	if(col1!=row2)
	{
		printf("matrix can't be multiplied");
	}
	int a[row1][col1],b[row2][col2];
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int R[row1][col2];
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			R[i][j]=0;
			for(k=0;k<col1;k++)
			R[i][j]+=a[i][k]*b[k][j];
		}
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d ",R[i][j]);
		}
		printf("\n");
	}
	return 0;
}
