#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	for(i = 0;i < n ;i ++){
		scanf("%d",&a[i]);
		printf("\n%d",a[i]);
		
		sum+=a[i];
	}
	printf("\ntot sum:%d\n",sum);
	int even_sum=0;
	int odd_sum=0;
	
	for(i=0;i<n;i++)
	{
		
		if(a[i]%2==0)
		{
			printf("even:%d",a[i]);
			even_sum+=a[i];
		}
		
		if(a[i]%2!=0)
		{
			printf("odd:%d\n",a[i]);
			odd_sum+=a[i];
		}
		
	}
	printf("even_sum:%d\n",even_sum);
	printf("odd_sum:%d\n",odd_sum);
}
