#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,A;
	printf("a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0f;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("A=%f",A);
	return 0;	
}
