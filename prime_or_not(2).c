//#include<stdio.h>
//int main()
//{
//    int n,i;
//    printf("enter the number:");
//    scanf("%d",&n);
//    for(i=2;i<n;i++)
//    {
//        if(n%i==0)
//        {
//            printf("not prime");
//            break;
//        }
//    }
//    if(i==n)
//    {
//        printf("prime");
//    }
//}


#include<stdio.h>
int main()
{
	int n,i,c;
	printf("enter a value for n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
		printf("%d",c);
	}
}























