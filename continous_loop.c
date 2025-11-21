#include<stdio.h>
int main ()
{
	int i,n;
	scanf("%d",&n);
	printf("continue demo\n");
	for (i=1;i<=n;i++)	
	{
		if(i==5)
            break ;
		printf("%d ",i);
	}
	printf("\nTask completed");

	return 0;
}

