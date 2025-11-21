#include<stdio.h>
int main()
{
    int rows,cols,i,j;
    scanf("%d%d",&rows,&cols);
    int ar[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("_______________________________\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
           
            printf("%d ",ar[j][i]);
        }
        printf("\n");
    }
   
    return 0;
}
