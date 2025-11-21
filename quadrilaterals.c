#include<stdio.h>
int main()
{
	int a,b,c,d,S;
	printf("angles of quadrilateral");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	S=a+b+c+d;
	if (S==360)
	{
		printf("the given angles can form a quadrilateral ");
	}
	else
	{
		printf("the angles can't form a quadrilateral");
	}
	return 0;
}
