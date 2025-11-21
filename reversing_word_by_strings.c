#include<stdio.h>
int main()
{
	char a[50];
	char b[50];
	int len,i,j=0;
	gets(a);
	len=strlen(a);
	printf("Length of %s is %d",a,len);
	for(i=len-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("reverse of word :%s",b);
	return 0;
}
