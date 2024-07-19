#include<stdio.h>
#define max 20
int rear=-1,front=-1,q[max];
 int display()
 {
    for(int i=front;i<=rear;i++)
    {
        printf("%d",q[i]);
    }
 }
 int insert()
{
    int item;
    if(rear==max-1)
    {
        printf("Full");
        return 1;
    }
    else if( rear==-1 && front==-1)
    {
        front=0;
    }
        printf("Enter the item:");
        scanf("%d",&item);
    rear =rear+1;
    q[rear]=item;
    
}
 int delete()
{
    int item;
    if(rear==-1)
    {
        printf("empty");
    }
    else if(rear==front)
    {
        front=-1;
        rear=-1;
    }
    else
    {
     item=q[front];
     front=front+1;
    }
}
void main()    
{
    int ch;
    while(1)
    {
printf("Enter your choices\n 1:insert\n 2:delete:\n 3:display\n");
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
