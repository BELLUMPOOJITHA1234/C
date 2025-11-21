#include<stdio.h>
void sum();
int main()
{
	int n,r,og,sum=0;
	scanf("%d",&n);
	og=n;
	sum=sum(n);
	printf("%d",sum);
	return 0;	
}
void main()
{
	while(n!=0)
	{
		r=n%10;
	    sum=sum*10+r;
	    n=n/10;
	}
	if(og==sum)
	{
		printf(" palindrome");
	}
	else
	{
		printf(" not palindrome");
	}
	return sum(n);
}
