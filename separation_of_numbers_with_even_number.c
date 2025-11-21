#include<stdio.h>
int main()
{
	int n,rem;
	scanf("%d",&n);
	while (n>0)
	{
		rem=n%10;
		if(rem%2==0) printf("%d\n",rem);
	     n=n/10;
	}
	return 0;
}
