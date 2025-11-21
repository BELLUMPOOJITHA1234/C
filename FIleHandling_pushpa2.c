#include<stdio.h>
int main()
{
	FILE *fp2;
	fp2=fopen("Pushpa2.txt","w+");
	if(fp2==NULL)
	{
		printf("File connection lost");
		return 1;
	}
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='$')
		break;
		fputc(ch,fp2);
	}
	fclose(fp2);
	return 0;
}
