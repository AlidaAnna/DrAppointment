#include<stdio.h>
#define max 20
int q[max];
int rear=-1;
int front=-1;
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d",q[i]);
    }
}
void insert()
{
    int item;
    if(rear==max-1)
    {
        printf("full");
    }
    else if(rear==-1 && front==-1)
    {
    front=0;
    }
    printf("enter the elemnt");
    scanf("%d",&item);
    rear=rear+1;
    q[rear]=item;
}
void delete()
{
    if(front==rear)
    {
        printf("%d is deleted",q[front]);
    }
    if(front==-1)
    {
        printf("empty");
    }
    front=front+1;
}
void main()
{
    insert();
    display();
    delete();
    display();
}