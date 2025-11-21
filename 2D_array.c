#include<stdio.h>
int main()
{
	int M[3][5]={
						{50,68,76,94,100},
						{45,96,85,25,99},
						{58,65,45,78,94}			
						};
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<5;j++)
				{
					printf("M[%d][%d]=%d \n",i,j,M[i][j]);
				}
			}
			return 0;
}
