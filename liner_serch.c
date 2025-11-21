#include<stdio.h>
int lnrsrh(int arr[],int n,int taget)
{
	int i;
    for(i=0;i<n;i++)
	{
        if(arr[i]==taget)
		{
            return i;
        }
		else
		{
            return -1;
        }
    }
}
int main()
{
    int arr[1000];

    int index = lnrsrh(arr , 5);
    if(index==-1)
	{
        printf("Element not found");
    }
	else
	{
        printf("Element found at index %d",index);
    }


    return 0;
}
