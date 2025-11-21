#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,n,d;
	printf("enter the values of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		p=-b+sqrt(d)/2*a;
		n=-b-sqrt(d)/2*a;
		printf("the real roots =%f %f",p,n);
	}
	else if(d==0)
	{
		p=-b/2*a;
		n=-b/2*a;
		printf("roots are equal = %f %f",p,n);
	}
	else 
	printf("roots are imaginary ");
	return 0;
}
