#include<stdio.h>
int main()
{
	char colour_code;
	scanf("%c",&colour_code);
	switch(colour_code)
	{
		case 'R':
		 printf("STOP");
		 break;
		case 'Y':
		 printf("SLOW DOWN");
		 break;
		case 'G':
		 printf("Go");
		 break;
		 default:
		 	printf("enter a valid colour");
	}
}
