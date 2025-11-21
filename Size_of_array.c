#include<stdio.h>
void increment(int*,int size)
void increment(int *ptr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        *(ptr+i)=*(ptr+i)+1;
    }
    printf("increment:\n");
    for(i=0;i<size;i++)
    printf("%d",*(ptr+i));
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("")
}