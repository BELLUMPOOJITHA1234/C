#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    p=fab(n);
    printf("%d",p);
    return 0;
}
int fab(int n)
{
    if(n<=1)
    return n;
    else
    return fab(n-1)+fab(n-2);
}