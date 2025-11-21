#include<stdio.h>
int main()
{
	int month_code;
	scanf("%d",&month_code);
	switch(month_code)
   {
	 case 3:
	 case 4:
     case 5:
     	printf("summer");
     	break;
     case 6:
     case 7:
     case 8:
     case 9:
     	printf("rainy");
     	break;
     case 10:
     case 11:
     case 12:
     case 1:
     case 2:
     	 printf("winter");
     	 break;
    default:
    	printf("enter a valid number of month");	
	}
    printf("\n your month");
}
