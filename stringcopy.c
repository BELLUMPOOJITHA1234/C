//#include <stdio.h>
//#include <string.h>  
//
//int main() {
//    char ch[50];  
//    char copy[50];
//	scanf("%[^\n]c",&ch);  
//    strcpy(copy,ch);
//    printf("Copied string: %s\n",copy);
//
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[100];
	scanf("%s",str1);
	printf("%s \n ",strupr(str1));
	
}
