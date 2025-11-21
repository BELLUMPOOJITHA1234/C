#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while (i<=10)
	{
	    int a=n*i;
		printf("%d*%d=%d\n",n,i,a);
		i++;
	}
	return 0;
}
