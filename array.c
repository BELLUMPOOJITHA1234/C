#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n], a;
	//  1 2 3 7 5
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	int x = 0;
     for(i=0;i<n;i++)
     {
     	if(a==arr[i])
     	{
     		x = 1;
     		printf("True ");
     		break;
		 }
      }
	  if(x==0)
	 {
	 	printf("False");
	 }
	
	 return 0;
}
