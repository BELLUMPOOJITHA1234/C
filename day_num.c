#include<stdio.h>
int main()
{
	int day_num;
	scanf("%d",&day_num);
	switch (day_num)
	{
		case 1:
		printf("sunday");
		 break;
		case 2:
		 printf("Monday\n");
		 break;
		case 3:
		 printf("Tuesday\n");
		 break;
		case 4:
		 printf("Wednesday\n");
		 break;
		case 5:
		 printf("Thursday\n");
		 break;
		case 6:
		 printf("Friday\n");
		 break;
	    case 7:
	     printf("Saturday\n");
	     break;
	    default:
	     printf("enter a valid number");		 
	}
	printf("\ntask completed");
}
