#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	partition(a,0,n-1);
	for(s=0;s<n;s++)
	{
		printf("%d ",a[s]);
	}
}
void partition(int a[],int start,int end)
{
	if(start<end)
	{
		int p=quick(a,start,end);
		partition(a,start,p-1);
		partition(a,p+1,end);
	}
}
int quicksort(int a[],int start,int end)
{
	int pivot_index=start;
	int temp=a[end];
	a[end]=a[pivot_index];
	a[pivot_index]=temp;
	pivot_index=end;
	int pivot=a[pivot_index];
	int k=start-1;
	int i;
	for(i=start;i<=end;i++)
	{
		if(a[i]<pivot)
		{
			k++;
			int temp=a[i];
			a[i]=a[pivot];
			a[pivot]=temp;
		}
	}
	temp=a[pivot_index];
	a[pivot_index]=a[k+1];
	a[k+1]=temp;
	return k+1;
}
