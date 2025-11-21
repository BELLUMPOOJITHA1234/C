#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,temp,lcm;
	scanf("%d%d",&a,&b);
	int gcd;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	lcm=(a*b)/gcd(a,b);
	printf("%d",lcm);
	return 0;
}
