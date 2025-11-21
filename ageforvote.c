#include<stdio.h>
int main()
{
	int age;
	printf("age:\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible for voting");
    }
    else
    {
    	printf("you are not eligible for next %d years",18-age);
	}
		return 0;
}
