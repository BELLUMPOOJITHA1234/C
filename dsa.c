//#include<stdio.h>
//int main()
//{
//    int n,key,i,j;
//    scanf("%d",&n);
//    int ar[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&ar[i]);
//    }
//    for(i=1;i<n;i++)
//    {
//        key=ar[i];
//       for(j=i-1;j>=0&& ar[j]>key;j--)
//        {
//            ar[j+1]=ar[j];
//        }
//        ar[j+1]=key;
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",ar[i]);
//    }
//}

//#include<stdio.h>
//int main()
//{
//	int n,r
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0,r=0;i<n;i++)
//	{
//		r=i
//	}
//	for(j=i+1;j<n-1;j++)
//	{
//		
//	}
//}

#include<stdio.h>
int main()
{
    int n,i,j,ref;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        ref=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[j]<ar[ref])
            {
                ref=j;
            }
            int temp=ar[i];
            ar[i]=ar[ref];
            ar[ref]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}






















