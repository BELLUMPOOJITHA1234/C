#include<stdio.h>
#include<math.h>
 int dis(int a,int b, int c, int d)
    {
    	int n;
    	n= sqrt (pow(b-a,2)+pow(d-c,2
		));
    	return n;
	}
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
    int z =dis(a,b,c,d);
    printf("%d",z);
}
