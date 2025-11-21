#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fptr;
	fptr=fopen("VHV.doc","r");
	if(fptr==NULL)
	{
		printf("The file is not available");
		exit(0);
	}
	else
	{
		printf("The file is created successfully..");
	}
}
