#include<stdio.h>
#include<stdlib.h>
#define size 100
int q[size],front=0,rear=-1,i;
int main()
{
    int n;
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.display");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            display();
            break;
            default:
            exit(0);
            break;
        }
    }
}
int Enqueue()
{
    if(front==(rear+1)%size)
    {
        printf("Queue is full");
    }
    else{
        if(front==-1)
        {
            front =rear=0;
        }
        else{
            rear=(rear+1)%size;
            scanf("%d",&q[rear]);
        }
    }
}
int Dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else{
        if(front==rear)
        {
            front=rear=-1;
        }
        else{
            front=(rear+1)%size;
        }
    }
}
int display()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        int i=front;
        while(i!=rear)
        {
            printf("%d ",q[i]);
            i=(i+1)%size;
        }
        printf("%d\n",q[i]);
    }
}
