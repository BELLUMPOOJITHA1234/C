#include<stdio.h>
int main()
{
	int P,T,R;
	float I;
	printf("P,T,R");
	scanf("%d%d%d",&P,&T,&R);
	I=(P*T*R)/100;
	printf("I=%f",I);
	return 0;
}
