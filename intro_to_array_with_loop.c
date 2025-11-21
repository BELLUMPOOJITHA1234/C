#include<stdio.h>
int main()
{
	int marks[2]={25,33};
	printf("%d\n",marks[0]);
	int i,s=0;
	for(i=0;i<2;i++)
	{
		int k=marks[i];
		s=s+k;
		printf("%d ",marks[i]);
	}
	printf("\n%d",s);
	return 0;
}
