#include<stdio.h>
swap (int *p1 ,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
