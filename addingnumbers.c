#include<stdio.h>
int add(int n,int b)
{
    int sum=0,rem,rem2,sum2;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        rem2=sum%10;
        sum2+=rem2;
        n/=10;
    }
    printf("%d",sum2);
}
int main()
{
    int n,b;
    scanf("%d",&n);
    add(n,b);
}