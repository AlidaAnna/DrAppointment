#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
}*head=NULL,*newnode;
void create()
{
    char ch;
    struct node *curptr;
    do
    {

    newnode=(struct node*)malloc (sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
        curptr=newnode;
    }
    else
    {
        curptr->link=newnode;
        curptr=newnode;
    }
    printf("if you want to add one more node enter Y");
    scanf(" %c",&ch);
}
while(ch=='y'||ch=='Y');
}
void display()
{
    struct node *p=head;
    while(p!=NULL)
    {
     printf("\n%d",p->data);
     p=p->link;
    }
}
void push()
{
    struct node *p=head;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    newnode=(struct node*)malloc (sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    p->link=newnode;
    newnode->link=NULL;
    display();
}
void pop()
{
    struct node *p=head;
    struct node *q=head;
    while(p->link!=NULL)
    {
        q=p;
        p=p->link;
    }
    q->link=NULL;
    free(p);
    display();
}
void main()
{
    int ch;
    while(1)
    {
    printf("Enter your choices 1:create 2:display 3:push 4:pop");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    create();
    break;
    case 2:
    display();
    break;
    case 3:
    push();
    break;
    case 4:
    pop();
    break;
    default:
    printf("invalid");
    break;
    }
    }
}