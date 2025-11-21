#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;    
}