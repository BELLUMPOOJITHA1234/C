#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
int stack[size],i,n,top=-1;
int main()
{
    char ex;
    printf("Enter an expression:\n");
    gets(ex);
    printf("Evaluated answer: %d",expression(ex));
}
int push()
{
    stack[++top]=n;
}
int pop()
{
    return stack[top--];
}
int expression(char *ex)
{
    int d=0,s=0,i;
    for(i=0;ex[i]!='\0';i++)
    {
        if(isdigit(ex[i]))
        d++;
        else if(ex[i]='+'||ex[i]=='-'||ex[i]=='*'||ex[i]=='/'||ex[i]=='%')
        s++;
        else{
            printf("invalid expression\n");
            exit(0);
        }        
    }
    for(i=0;ex[i]!='\0';i++)
    {
        if(isdigit(ex[i])||ex[i]=='+'||ex[i]=='-'||ex[i]=='*'||ex[i]=='/'||ex[i]=='%')
        {
            if(isdigit(ex[i]))
            {
                push(ex[i]-'0');
            }
            else{
                int a,b;
                a=pop();
                b=pop();
                switch(ex[i])
                {
                    case '+':
                        push(b+a);
                        break;
                    case '-':
                        push(b-a);
                        break;
                    case '*':
                        push(b*a);
                        break;
                    case '/':
                        push(b/a);
                        break;
                    case '%':
                        push(b%a);
                        break;
                }
            }
        }
        else
        {
            printf("Invalid expression\n");
            exit(0);
        }
        if(top!=0)
        {
            printf("Invalid expression\n");
            exit(0);
        }
        else
        {
            return stack[top];
        }
    }
}
