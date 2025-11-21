#include<stdio.h>
int tr (int b, int h)
  {
  	int a ;
  	a=1/2*(b*h);
  	return a;
  }
  int main()
  {
  	int b,h;
  	scanf("%d%d",&b,&h);
    int z=tr (b,h);
    printf("%d",z);
  }
