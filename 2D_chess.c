#include<stdio.h>
int main ()
{
	char B,W;
	char chess[8][8]={{'B','W','B','W','B','W','B','W'},
					 {'W','B','W','B','W','B','W','B'},
					 {'B','W','B','W','B','W','B','W'},
					{'W','B','W','B','W','B','W','B'},
					 {'B','W','B','W','B','W','B','W'},
					 {'W','B','W','B','W','B','W','B'},
					{'B','W','B','W','B','W','B','W'},
					 {'W','B','W','B','W','B','W','B'},
					 };
 		int i,j;
 		for(i=0;i<8;i++)
 		{
 			for(j=0;j<8;j++)
 			{
 				printf("%c ",chess[i][j]);
			 }
			 printf("\n");
		 }
    return 0;
}
