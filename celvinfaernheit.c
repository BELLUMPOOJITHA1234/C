#include<stdio.h>
int main()
{
	double c,f,k;
	int option;
	scanf("%lf",&option);
	switch(option)
	{
		case 1:
			 scanf("%lf",&c);
			 f=(c*9)/5.0 +32;
			 printf("f=%.2lf",f);
			 break;
		case 2:
			 scanf("%lf",f);
			 c=(f-32)*5.0/9;
			 printf("c=%.2lf",c);
			 break ;
		case 3:
		     scanf("%lf",c);
		     k=(c-273.15);
		     printf("k=%.2lf",k);
		     break;
	    default:
	    	printf("enter a valid number");
	}
	return 0;
}
