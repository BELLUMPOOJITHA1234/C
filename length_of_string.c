#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	int length;
	gets(ch);
	length=strlen(ch);
	printf("length of string:%d",length);
	return 0;
}
