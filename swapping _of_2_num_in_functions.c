#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping :a=%d,b=%d\n",a,b);
    swap (a,b);
	
}
int swap (int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping values of a and b: a=%d , b=%d \n",a,b);
}

