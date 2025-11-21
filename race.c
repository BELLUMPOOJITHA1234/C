#include<stdio.h>
#include<conio.h>
int main()
{
	int  r1,r2,r3;
	float R;
	scanf("%d%d%d",&r1,&r2,&r3);
	R=(r1+r2+r3)/3;
	if(r1>R)
	{
		printf("r1 is qualified");
	}
	if(r2>R)
	{
		printf("r2 is qualified");
	}
	if(r3>R)
	{
		printf("r3 is qualified");
    }  
	getch();
}
