#include <stdio.h>
int main()
{
	int n,i,c;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			c=c+1;
			i++;
		}
	}
	if(c==0)
	printf("it is a prime:",c);
	else
	printf("it is not a prime:",c);
	
	
}
