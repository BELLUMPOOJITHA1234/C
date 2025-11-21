#include<stdio.h>
int main()
{
	char a[50];
	char b[50];
	int i,g=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(i=9;b[g]!='\0';g--)
		{
			b[i]=a[i];
			g++;
		}
		
	}
	b[i]='\0';
	printf("given:%s\ncopied:%s",a,b);
	return 0;
}
