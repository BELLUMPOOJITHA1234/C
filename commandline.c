#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[50];
    int a,b,c,d,e;
};
int main(int argc,char *argv[])
{
    struct student n;
    int total;
    strncpy(n.name,argv[1],sizeof(n.name)-1);
    n.name[sizeof(n.name)-1]='\0';
    n.a=atoi(argv[2]);
    n.b=atoi(argv[3]);
    n.c=atoi(argv[4]);
    n.d=atoi(argv[5]);
    n.e=atoi(argv[6]);
    total=n.a+n.b+n.c+n.d+n.e;
    printf("Name\ta\tb\tc\td\te\ttotal\n");
    printf("%s\t%d\t%d\t%d\t%d\t%d\n",n.name,n.a,n.b,n.c,n.d,n.e,total);
}
