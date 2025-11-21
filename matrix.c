#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0 || i==0) 
            {
                printf("%d ",a[i][j]*a[i][j]*a[i][j]);
            }      
            else
            {
                printf("%d ",a[i][j]*a[i][j]);
            }
        }
        printf("\n");
    }
}