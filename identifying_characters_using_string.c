#include<stdio.h>
#include<string.h>
int main()
{
	char item[20];
	int i;
	scanf("%s",item);
	int ucount=0,lcount=0;
	int scount=0,dcount=0;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		ucount++;
		else if(item[i]>='a' && item[i]<='z')
		lcount++;
		else if(item[i]>='0' && item[i]<='9')
		dcount++;
		else 
		scount++;
	}
	printf("number of upper characters:%d\n",ucount);
	printf("number of lower characters:%d\n",lcount);
	printf("number of digits:%d\n",dcount);
	printf("number of special characters:%d",scount);
  	return 0;
}
