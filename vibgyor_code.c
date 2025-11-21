#include<stdio.h>
int main()
{
	char vibgyor_code;
	scanf("%c",&vibgyor_code);
	switch(vibgyor_code)
	{
		case 'V':
		case 'v':
			printf("violet");
			break;
	    case 'I':
	    case 'i':
	    	printf("Indigo");
	    	break;
	    case'B':
	    case'b':
	    	printf("Blue");
	    	break;
	    case'G':
	    case'g':
	    	printf("Green");
	    	break;
	    case'Y':
	    case'y':
	    	printf("Yellow");
	    	break;
	    case'O':
	    case'o':
	    	printf("Orange");
	    	break;
	    case'R':
	    case'r':
	    	printf("Red");
	    	break;
	    default :
	    	printf("enter a valid colour");
	    	break;
	}
	printf("\n enjoy with the rainbow");
}
