#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50];
	int i;
	int a[50]={0};
	gets(str);
	printf("Given:%s\n",str);
	strupr(str);
	printf("Transformed:%s\n",str);
	for(i=0;str[i]!=0;i++)
	{
		a[str[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c->%d\n",(char)i+65,a[i]);
		}
		if()
	}
	return 0;
}
