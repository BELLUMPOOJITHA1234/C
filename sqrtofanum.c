#include<stdio.h>
int main()
{ 
   int n,r,c,og,sum=0;
   scanf("%d",&n);
   og=n;
   while(n!=0)
   {
   	r=n%10;
   	c=r*r*r;
   	sum=sum+c;
   	n=n/10;
   }
   if(og==sum)
   {
   	printf("arm");
   }
   else
   {
   	printf("not arm");
   }
}
