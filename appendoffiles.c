#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fptr;
	//creating file using fopen() access mode "w"
		fptr=fopen("VHV.docx","a");
		if(fptr == NULL)
		{
		 printf("the file is not found");
		 exit(0);	
		}
		else
		{
			char VHV[100];
			gets(VHV);
			puts(VHV);
			printf("the file created successfully");
			fclose(fptr);
		}
		return 0;
}
