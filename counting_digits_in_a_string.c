#include<stdio.h>
int main()
{
	char s[30];
	int i;
	int digits[10]={0};
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		digits[s[i]-'0']++;
	}
	printf("digits count:\n");
	for(i=0;i<10;i++)
	{
		if(digits[i]!=0)
		{
			printf("%d->%d\n",i,digits[i]);
		}
	}
	return 0;
}
