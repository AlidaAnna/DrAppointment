#include<stdio.h>
#define max 20
int front=-1;
int rear=-1;
int q[max];
void display()
{

    for(int i=front;i<=rear;i=i+1%max)
    {
        printf("%d",q[i]);
    }
     printf("back:\n");
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
    printf("full");
   }
   else if(rear==-1 && front==-1)
   {
    front=0;
   }
   printf("enter the item");
   scanf("%d",&item);
   rear=rear+1%max;
   q[rear]=item;
   display();
}
void delete()
{
    int item;
    if(front==-1)
    {
        printf("empty");
    }
    else
    {  
    item=q[front];
    front=front+1%max;
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