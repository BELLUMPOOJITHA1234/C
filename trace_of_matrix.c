//#include<stdio.h>
//int main()
//{
//	int rows,cols,i,j,sum=0;
//	scanf("%d%d",&rows,&cols);
//	int a[rows][cols];
//	for(i=0;i<rows;i++)
//	{
//		for(j=0;j<cols;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	
//	for(i=0;i<rows;i++)
//	{
//		sum=sum+a[i][i];
//	}
//	printf("%d",sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int row1,col1,row2,col2,i,j,k;
	scanf("%d%d%d%d%d",&row1,&col1,&row2,&col2);
	if(col1!=row2)
	{
		printf("matrix can't be multiplied");
		return 0;
	}
	int a[row1][col1],b[row2][col2],R[row1][col2];
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
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		R[i][j]=0;
		for(k=0;k<col1;k++)
		R[i][j]+=a[i][k]*b[k][j];
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d",R[i][j]);
		}
	}
	return 0;
}
