#include<stdio.h>
int findfactor(int);
int main()
{
    int n;
    scanf("%d",&n);
    int fact_count=findfactor(n);
    printf("\n factors of %d:%d",n,fact_count);
    return 0; 
}
int findfactor(int m)
{
    int count=1,i;
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
             printf("%d ",i);
             count++;
        }
        
    }
    printf("%d\n",m);
	return count;
}

