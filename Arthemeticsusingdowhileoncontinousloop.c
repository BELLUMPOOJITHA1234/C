#include<stdio.h>
int main()
{
	int option,num1,num2,result;
	char choice;
	do
	{
		printf("1. Addition\n2. Subtrcation\n3. Product\n4. Division\n5. Mod");
		printf("\n Enter an option");
		scanf("%d",&option);
		printf("\nEnter any two numbers\n");
		scanf("%d%d",&num1,&num2);
	 switch(option)
	 {
	 	case 1:
	 		result=num1+num2;
	 		printf("Addition=%d\n",result);
	 		break;
	 	case 2:
	 	    result=num1-num2;
	 		printf("Subtraction=%d\n",result);
	 		break;
	 	case 3:
	 		result=num1*num2;
	 		printf("Product=%d\n",result);
	 		break;
	 	case 4:
	 		if(num2!=0)
	 		{
			 
			 result=num1/num2;
	 		printf("Division=%d\n",result);
	 	    }
	 	    else
		    { 
	 	         printf("Division is not possible");
	 	        break;
	 	    }
	 	case 5:
	 		if(num2!=0)
	 		{
			result=num1%num2;
	 		printf("Mod=%d\n",result);
	     	}
	     	else 
	     	printf("\nMod is not possible");
	    default:
	    	printf("Enter a valid option");
	    	break;
	 }
    fflush(stdin);
	printf("Do you want to continue.....(Y/N)");
	scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');    	
		 printf("Thanks for using my simple calculator");
		 return 0;	
}

