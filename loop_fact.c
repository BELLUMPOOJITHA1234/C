#include<stdio.h>
int main()
{
	int n,fac=1,i;
	scanf("%d",&n);
     for (i=n;i>=1;i--)
     {
       fac=fac*i;   
	 }
	 printf("fact of %d is %d",n,fac);
	 return 0;
}
