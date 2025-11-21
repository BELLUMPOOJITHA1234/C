#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *x,*y;
    x=&a;
    y=&b;
    printf("%d %d\n",a,b);
    printf("%u %u\n",x,y);
    printf("%d %d\n",*x,*y);
    *x=30;
    printf("%d %d\n",a,b);
    return 0;
}