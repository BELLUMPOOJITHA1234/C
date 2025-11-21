#include<stdio.h>
int hottest(int row,int col,int ar[row][col]);
void matrix(int row,int col,int ar[row][col]);
int main()
{
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	int tem[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&tem[i][j]);
		}
	}
	matrix(r,c,tem);
	int hot=hottest(r,c,tem);
	
	printf("\n hottest is :%d",hot);
	
	return 0;
}
void matrix(int rows,int cols,int ar[rows][cols])
{
	int i,j;
	
    for(i=0;i<rows;i++)
    {
    	for(j=0;j<cols;j++)
    	{
    		printf("%d\t",ar[i][j]);
		}printf("\n");
	}
}
int hottest(int rows,int cols,int ar[rows][cols])
{
	int i,j;
	int max=ar[0][0];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(max<ar[i][j])
			{
				max=ar[i][j];
			}
		}
	}
	return max;
}