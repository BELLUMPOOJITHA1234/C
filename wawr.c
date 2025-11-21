#include<stdio.h>
 int br(int x, int y, int z)
    {
    	int a;
    	a=(z-y)/x;
    	return a;
	}
	int main()
	{
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
	int c=br(x,y,z);
	printf("%d",c);
	}
