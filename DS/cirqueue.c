#include<stdio.h>
#define max 20
int q[max];
int front=-1;
int rear=-1;
void display()
{
    for(int i=front;i<=rear;i=i+1%max)
    {
        printf("%d",q[i]);
    }
    for(int i=rear;i>=front;i=i-1%max)
    {
         printf("%d",q[i]);
    }
}
void insert()
{
    int item;
if(rear+1%max==front)
{
printf("Full");
}
else if(front==-1 && rear==-1)
{
front=0;
}
    printf("Enter the elements:");
    scanf("%d",&item);
    rear=rear+1%max;
    q[rear]=item;

}
void delete()
{
    int item;
    if(front=-1)
    {
        printf("empty");
    }
    else
    {
        item=q[front];
        front =front+1%max;
    }
}
void main()
{
int ch;
while(1)
{
    printf("ENter your choices\n 1:insert\n 2:delete\n 3:display\n ");
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
    }
} 
}