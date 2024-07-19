#include<stdio.h>
#define max 20
int q[max];
int front=-1;
int rear=-1;
void display()
{
    if(front==-1||front >rear)
    {
       printf("queue is empty");
    }
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
        printf("queue is full");
    }
    if(front==-1 && rear==-1)
    {
        front=0;
    }
    printf("Enter the item");
    scanf("%d",&item);
    rear=rear+1;
    q[rear]=item;
    display();
}
void delete()
{
    if(rear==-1)
    {
        printf("queue is underflow");
    }
    int item=q[front];
    front=front+1;
    display();
}

void main()
{
    int ch;
    while(1)
    {
    printf("Enter choices 1:insert,2:delete,3:display");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        display();
        break;
        default:
        printf("invalid");
        break;
    }
    }

}
