#include<stdio.h>
int main()
{
   int P,T;
   float R;
   float I;
   printf("P,T,R");
   scanf("%d%d%f",&P,&T,&R);
   I=(P*T*R)/100;
   printf("I=%f",I);
   return 0;
}

