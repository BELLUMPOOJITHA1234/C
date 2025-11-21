//#include<stdio.h>
//{
//	int fact=1,i;
//	for(i=n;i>=1;i--)
//	{
//		fact=fact*i;
//	}
//	return fact;
//}
//int main()
//{
//	int n;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	int result=factorial(n);
//	printf("factorial of %d is :%d",n,result);
//	return 0;
//}


//#include<stdio.h>
//int pal(int n)
//{
//	int r,sum=0;
//	while(n!=0)
//	{
//		r=n%10;
//		sum=sum*10+r;
//		n=n/10;
//	}
//}
//int main()
//{
//	int n,on;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	on=n;
//	int x=pal(n);
//	if(on==x)
//	{
//	printf("the palindrome num is :%d",x);
//	}
//	else
//	{
//		printf("%d is not a plaindrome",x);
//	}
//}

//
//#include<stdio.h>
//int arm(int n,int sum)
//{
// int r,c;
//	while(n!=0)
//	{
//		r=n%10;
//		c=r*r*r;
//		sum=sum+c;
//		n=n/10;
//	}
//		return sum;
//	
//}
//int main()
//{
//	int n,on,x,sum=0;
//	printf("enter the value of n:");
//	scanf("%d",&n);	
//	on=n;
//    x=arm(n,sum);
//    if(on==x)
//    {
//    	printf("%d is arm",x);
//	}
//	else
//	{
//		printf("%d is not a arm:",x);
//	}
//}


//#include<stdio.h>
//int swap(int n, int m)
//{
//   int temp;
//   temp=n;
//   n=m;
//   m=temp;
//   printf("after swapping  n and m are %d and %d\n ",n,m)	;
//}
//int main()
//{
//	int n,m;
//	printf("enter the values of n and m:");
//	scanf("%d%d",&n,&m);
//	swap(n,m);
//	printf("before swapping the values %d and %d",n,m);
//}


//#include<stdio.h>
//int main()
//{
//	int n,m,t;
//	printf("enter the values of n and m:");
//	scanf("%d%d",&n,&m);
//	int a[n][m],i,j;
//	printf("enter the values into matrix a:");
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<m;i++)
//{
//	for(j=0;j<n;j++)
//	{
//	printf("%d",a[j][i]);
//	}
//}
//printf("\n");
//return 0;
//}


#include<stdio.h>
int main()
{
	int a[100],n,i,min,max;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the values into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else if (min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d is largest:\n",max);
	printf("%d is smallest:",min);
}



























































