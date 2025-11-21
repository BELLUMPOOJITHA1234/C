#include<stdio.h>
int main()
{
    int n=6,i;
    int s[n]={'P','a','n','d','h','i'};
    s[5]='a';
    for(i=0;i<n-1;i++)
    {
        printf("%c",s[i]);
    }
}