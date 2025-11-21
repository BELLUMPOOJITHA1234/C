#include<stdio.h>
 int  arm(int n)
    {
    	int r,c,sum=0;
    	while(n>0)
    	{
    		r=n%10;
    		c=r*r*r;
    		sum=sum+c;
    		n/=10;
		}
		return sum;
	}
int main()
{
	int n,t;
	scanf("%d",&n);
	t=n;
  int x=arm(n);
  if(t==x)
  {
  	printf("%d is arm",x);
  }
  else
  {
  	printf("%d is not arm",x);
  }
  
}
