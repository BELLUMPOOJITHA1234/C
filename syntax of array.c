#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int i,a[n];
	for(i=0;i<=n-1;i++)
	{
	   scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i--)
    {
    	printf("%d",a[i]);
	}
	
}
