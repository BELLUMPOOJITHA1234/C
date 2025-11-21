//#include<stdio.h>
//void mat();
//int main()
//{
//	int n,i;
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++)
//	{
//		mat(a,i);
//		printf("%d",a[i]);
//	}
//	return 0;
//}
//	void mat(int a[],int i)
//	{
//	scanf("%d",&a[i]);
//}



#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
     int b[n][m];
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		scanf("%d",&b[i][j]);
		}
	}
	int c[n][m];
	for(i=0;i<n;i++)
	{
     	for(j=0;j<m;j++)
     	{
        	c[i][j]	= a[i][j]+b[i][j];
		 }
	}
      for(i=0;i<n;i++)
      {
      	for(j=0;j<m;j++)
      	{
      		printf("%d",c[i][j]);
		  }
		  printf("\n");
	  }
	  return 0;
}


















