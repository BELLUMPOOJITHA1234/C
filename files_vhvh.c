#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fptr;
	//creating file using fopen() access mode "w"
		fptr=fopen("VHV.doc","r");
		if(fptr == NULL)
		{
		 printf("the file is not found");
		 exit(0);	
		}
		else
		{
			printf("the file created successfully");
		}
		return 0;
}
