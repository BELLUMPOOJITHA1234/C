#include<stdio.h>
int main()
{
	char name[10]={'T','e','j','a','\0'};
	printf("%d\n",sizeof(name));
	char ch[]={'a','u','s','\0'};
	printf("%d\n",sizeof(ch));
	printf("%s\n",name);
	printf("%s\n",ch);
	char branch[20];
	scanf("%s",branch);
	printf("%s",branch);
	return 0;
}
