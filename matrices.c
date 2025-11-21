//#include<stdio.h>
//int main()
//{
//	int a[10][10],b[10][10],mul[10][10];
//	int r,p;
//	int k,i,j;
//	printf("enter 1st matrix:");
//	scanf("%d%d",&r,&p);
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<p;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("enter 2nd matrix:");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<p;j++)
//		{
//			scanf("%d",b[i][j]);
//		}
//		printf("\n");
//	}
//	  for(i=0;i<r;i++)
//	  {
//	  	for(j=0;j<p;j++)
//	  	{
//	  		mul[i][j]=0;
//			 for(k=0;k<p;k++)
//			 {
//			 	mul[i][j]+=a[i][k]*b[k][j];
//			 }
//			 printf("\n");
//		  }
//		  for(i=0;i<r;i++)
//		  {
//		  	for(j=0;j<p;j++)
//		  	{
//		  		printf("%d",mul[i][j]);
//			  }
//		  }
//		  print("\n");
//	  }
//}



//#include<stdio.h>
//int main()
//{
//	int n,m,i,j;
//	scanf("%d%d",&n,&m);
//	int a[n][m];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("transpose of the matrix:\n");
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%d\n",a[j][i]);
//		}
//		printf("\n");
//	}
//}




#include<stdio.h>
int main()
{
	int r,c,i,j,t=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("trace of a matrix:");
	{
		for(i=0;i<r;i++)
		{
				t=t+a[i][i];
		}
		printf("%d",t);
	}
}























