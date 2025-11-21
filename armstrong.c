#include<stdio.h>
int arm(int n)
{
   int sum=0,c,r;
   while(n!=0)
   {
   r=n%10;
   c=r*r*r;
   sum=sum+c;
   n=n/10;
	}
   return sum;
   
}
int main()
{
	int n,on;
	scanf("%d",&n);
	on=n;
int x= arm(n);
if (on==x)
{
	printf("armnum");
	}	
	else
	{
		printf("notarm");
	}
}
