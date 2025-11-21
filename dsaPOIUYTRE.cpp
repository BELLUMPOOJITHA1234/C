
#include <stdio.h>
void selectionSort(int arr[], int n)
 {
    int i, j, min; 
    for (i = 0; i < n - 1; i++)
	 {
        min = i;
        for (j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[min])
			 {
                min = j;
            }
        }
        if (min != i) 
		{
            int temp = arr[min]; 
            arr[min] = arr[i];  
            arr[i] = temp;     
        }
    }
}
void printArray(int arr[], int n)
 {
 	
    int i;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]); 
    }
    printf("\n");
}
int main()
 {
   int n;
   scanf("%d",&n);
   int arr[n],i;
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n);        
    return 0;
}

