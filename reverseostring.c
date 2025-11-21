#include<stdio.h>
int main()

{
	 char a[50];
	 char b[50];
	 int len,i,j=0;
	 gets(a);
	 len=strlen(a);
	 for(i=len-1;i>=0;i--)
	 {
	 	b[j]=a[i];
	 	j++;
	 	
	 }
	 b[j]='\0';
	 printf("Reverse of %s	 is %s\n",a,b);
	 return 0;
}
