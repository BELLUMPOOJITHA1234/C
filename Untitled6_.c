#include<stdio.h>
void mat();
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		mat(i,a);
		printf("%d",a[i]);
	}
	return 0;
}
	void mat(int a[],int i)
	{
	scanf("%d",&a[i]);
}
