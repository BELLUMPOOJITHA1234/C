#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	char name[i];
	int a=0;
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		a++;
	}
	printf("total words:%d\n",a+1);
 	return 0;
}
