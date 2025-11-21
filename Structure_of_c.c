
#include<stdio.h>   

void displayArea();
float area;
int main()
{
	float r,PI=3.14;
	displayArea();
	scanf("%f",&r);
    area=PI*r*r;
	//printf("%.2f",area);
	displayArea();
	return 0;
}
void displayArea()
{
	printf("Area=%.2f",area);
}
   
   
