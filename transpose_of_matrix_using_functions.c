#include<stdio.h>
void displaymatrix(int rows,int cols,int matrix[][]);
void findtranspose(int rows,int cols,int matrix[][]);
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int A[rows][cols];
	printf("Enter the %d elements\n",(rows*cols));
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Given matrix A is:\n");
	displayMatrix(rows,cols,A);
	findtranspose(rows,cols,A);
	return 0;
}
void diplaymatrix(int rows,int cols,int matrix[rows][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			matrix[i][j];
			printf("\n");
		}
	}
void findtranspose(int rows,int cols,int matrix[rows][cols])
{
	int T[cols][rows],i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0j<cols;j++)
		{
			T[j][i]=matrix[i][j];
		}
	}
	printf("Transpose of given matrix :\n");
	displaymatrix(cols,rows,T);
}
}
