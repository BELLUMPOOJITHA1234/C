#include<stdio.h>
int main()
{
    int n,i,key;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(ar[i]==key)
        {
            printf("found at %d index",i);
        }
        
    }
}
