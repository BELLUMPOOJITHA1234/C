#include<stdio.h>
int main()
{
char item[20];
	int i;
	scanf("%s",item);
	int a=0;
	for(i=0;item[i]!='\0';i++)
	{
	a++;
	}
	printf("length of string %s is : %d",item,a);
	return 0;
}
