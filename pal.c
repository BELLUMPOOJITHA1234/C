#include<stdio.h>
int pal(int n)
{
	int sum=0,r;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n,t;
	scanf("%d",&n);
	t=n;
 int c=pal(n);
 if(c==t)
 {
 	printf("%d is pal",c);
 }
 else 
 {
 	printf("%d is not pal",c);
 }
}
