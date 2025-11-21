#include<stdio.h>
int main()
{
	int p,t,r;
	float I;
	printf("p,t,r\n");
	scanf("%d%d%d\n",&p,&t,&r);
	I=(p*t*r)/100;
	printf("I=%f",I);
	return 0;
}
