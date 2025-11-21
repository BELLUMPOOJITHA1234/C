#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	char copy[50];
	int i;
	scanf("%[^\n]c",&ch);
	for(i=0;i!='\0';i++)
	{
		copy[50]=ch[i];
		i++;
	}
	copy[50]=ch[i];
	printf("copied string:%c",copy[50]);
	return 0;
}
