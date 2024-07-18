#include<stdio.h>
#include<stdlib.h>
#define max 20
int q[max];
int front=-1;
int rear=-1;
void display()
{
    int i;
    for(int i=front ;i<=rear;i=i+1%max)
    {
        printf("%d",q[i]);
    }
    printf("backward");
     for(int i=rear ;i>=front;i=i-1%max)
    {
        printf("%d",q[i]);
    }
    if(q[rear==-1])
    {
        printf("empty");
        exit(0);
    }
}
void insert()
{
    int item;
    if(front==rear+1%max)
    {
        printf("full");
    }
    if(front==-1&&rear==-1)
    {
        front=front+1%max;
    } 
    printf("enter the item");
    scanf("%d",&item);
    rear=rear+1%max;
    q[rear]=item;
}
void delete()
{
int item;
if(front==-1)
{
    printf("Empty");
}
else
{
item=q[front];
front=front+1%max;
display();
}
}
void main()
{
    insert();
    display();
    delete();
    display();
}
