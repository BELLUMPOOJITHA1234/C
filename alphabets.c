#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("%c is a upper case letter",ch);
	}
	else
	{
		printf("%c is a lower case letter",ch);
	}
	return 0;
}
