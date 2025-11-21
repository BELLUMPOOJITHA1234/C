#include<stdio.h>
int find_factor(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=find_factor(n);
	printf(" factors of %d is:%d",n,fact_count);

     if(fact_count==2)
 {
 	printf("\nprime number");
 }
 else
 {
 	printf("\ncomposite number");
 }
 return 0;
}
 int find_factor(int m)
{
 	
	 int i,count;
	 for(i=1;i<=m/2;i++)
 	{
 		if(m%i==0)
	    {
	    	printf("%d ",i);
	    	count++;
		}
	}
	 printf("%d",m);
	 return count;
 }
 

