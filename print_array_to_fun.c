#include <stdio.h>

void printArray(int arr[], int size)
 {
 	int i;
    for ( i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    printArray(myArray, size);
    return 0;
}

