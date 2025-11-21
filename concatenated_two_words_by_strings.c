#include<stdio.h>
int main()
{
	char a[50];
	char b[50];
	char c[100];
	gets(a);
	gets(b);
	int i,j=0;
	for(i=0;a[j]!=0;i++)
	{
		c[j]=a[i];
		j++;
	}
	c[j]=' ';
	j++;
	for(i=0;b[j]!=0;j++)
	{
		c[j]=b[i];
		j++;
	}
	c[j]='\0';
	printf("%s %s",a,b);
	return 0;
}

