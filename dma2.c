#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for( int i=0;i<n;i++)
    {
    scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("sum of elements =%d",sum);
    return 0;
}