 #include<stdio.h>
#include<strings.h>
int main()
{
	char str[50];
	int i,len,flag=1;
	gets(str);
	len=strlen(str);
	for(i=0;i<(len/2);i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("%s is a palendrome",str);
	else
		printf("not a palendrome",str);
	return 0;	
}
