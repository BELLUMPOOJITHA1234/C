#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,dis,r1,r2,real,imaginary;
	scanf("%f%f%f",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0)
	{
		r1=(-b+sqrt(dis))/2*a;
		r2=(-b+sqrt(dis))/2*a;
		printf("real roots:%.2f %.2f",r1,r2);
	}
	else if(dis==0)
	{
		r1=-b/(2*a);
		printf("Real and equal roots:%.2f",r1);
	}
	else
	{
		real=-b/(2*a);
		imaginary=sqrt(-dis)/(2*a);
		printf("complex roots are :%.2f+%.2f and %.2f-%.2f",real,imaginary,real,imaginary);
	}
	return 0;
}
