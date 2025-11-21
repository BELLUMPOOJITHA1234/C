#include<stdio.h>
int main()
{
	int a,b,c;
	int max;
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	max=((a>b)?((a>c)?a:c):((b>c)?b:c));
	pritnf("maximum number is:%d",max);
	return 0;
}
