#include <stdio.h>
int binarySearchRecursive(int arr[], int low, int high, int key)
 {
    if (low > high) 
	{
        return -1; 
    }
    int mid = low + (high - low) / 2; 
    if (arr[mid] == key)
	 {
        return mid; 
    }
    else if (arr[mid] > key)
	 {
        return binarySearchRecursive(arr, low, mid - 1, key);
    }
    else
	 {
        return binarySearchRecursive(arr, mid + 1, high, key);
    }
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
    int key1;
    printf(enter the key)

    printf("Given list: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int result1 = binarySearchRecursive(arr, 0, n - 1, key1);
    if (result1 != -1)
	 {
        printf("Key %d found at index %d (position %d).\n", key1, result1, result1 + 1);
    }
	 else 
	 {
        printf("Key %d not found in the list.\n", key1);
    }
    int result2 = binarySearchRecursive(arr, 0, n - 1, key2);
    if (result2 != -1) 
	{
        printf("Key %d found at index %d (position %d).\n", key2, result2, result2 + 1);
    } 
	else 
	{
        printf("Key %d not found in the list.\n", key2);
    }
    return 0;
}
