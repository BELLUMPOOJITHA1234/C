#include<stdio.h>
int main()
{
int a[100],i,m,la,sm;
printf("enter how many elements enter into array :");
scanf("%d",&m);
printf("enter %d integer elements :\n",m);
for(i=0;i<m;i++)
scanf("%d",&a[i]);
la=a[0];
sm=a[0];
for(i=1;i<=m-1;i++)
{
	if(la<a[i])
	{
	la=a[i];
	}
	else if(sm>a[i])
	{
	sm=a[i];
	}
}
printf("\nlargest num in array:%d",la);
printf("\nsmallest num in array:%d",sm);
}
