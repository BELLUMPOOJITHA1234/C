//#include <stdio.h>
//#include <stdlib.h>
//
//int* createArray(int size,int i) 
//{
//    int* array = (int*)malloc(size * sizeof(int));
//    for( i = 0; i < size; i++) 
//	{
//        array[i] = i + 1;
//    }
//    return array;
//}
//
//int main() 
//{
//    int size = 5 , i;
//    int* arr = createArray(size,i);
//    for( i = 0; i < size; i++)
//	 {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//    return 0;
//}
#include<stdio.h>
void mat();
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		mat(a,i);
		printf("%d",a[i]);
	}
	return  0;
}
void mat(int a[],int i)
{
	scanf("%d",&a[i]);
}



