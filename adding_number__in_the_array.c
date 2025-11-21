#include<stdio.h>
int main()
{
	int arr[10],n,i,position,a;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	scanf("%d %d",&position,&a);
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	for(i=n;i>position-1;i--);
	{
		arr[i]=arr[i-1];
	}
	arr[position-1]=a;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;	
	}
