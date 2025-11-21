#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int square=n*n;
    int original=n;
    while(n!=0)
    {
        int remainder=square%10;
        sum+=remainder;
        square/=10;
    }
    if(original==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}