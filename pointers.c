#include<stdio.h>
int main()
{
    int x=10;
    double y=3.14;
    char ch='A';
    void *p;
    p=&x;
    printf("%d\n",*(int *)p);
    p=&y;
    printf("%lf\n",*(double *)p);
    p=&ch;
    printf("%c\n",*(char *)p);
    return 0;
}