#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		int a=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=a;
	}
	for (i=0;i<n;i++)
	{
			printf("\n%d ",arr[i]);
	}
	return 0;
}
