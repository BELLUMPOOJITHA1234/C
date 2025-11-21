#include<stdio.h>
int main()
{
    char s;
  	int n,m;
   double r;
   printf("entre a operator(+,-,*,/)");
    scanf("%c",&s);
    printf("enter the number ");
    scanf("%d%d",&n,&m);
    switch(s)
    {
        case '+':
                r=n+m;
                printf("sum=%.2lf",r);
                break;
        case '-':
                r=n-m;
                printf("diff=%.2f",r);
                break;
        case '*':
                r=n*m;
                printf("Product=%.2lf",r);       
                break;         
        case '/':
                if(m!=0)    
                {
                r=n/m;
                printf("remainder=%.2lf",r);
                }    
                else
                {
                printf("error");
                }
                break;
                default:
                 printf("the code is an error ");
    }
    return 0;
}
