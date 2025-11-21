#include<stdio.h>
int main()
{
	int i,n,min,max;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
    max=arr[0];
    for(i=1;i<n;i++)
    {
    	if(arr[i]>min)
    	min=arr[i];
	}
	printf("minimum:%d",min);
	printf("maximum:%d",max);
	return 0;
}
