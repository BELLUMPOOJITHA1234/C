#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount ,time and rate in percent:");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("si=%0.3f\n",si);
	printf("ci=%0.3f",ci);
}
