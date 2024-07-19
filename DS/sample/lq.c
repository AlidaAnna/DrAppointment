#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
}*head=NULL,*newnode;
void create()
{   char ch;
    struct node *curptr;
    do
    {
    newnode=(struct node* )malloc (sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
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
        printf("%d",p->data);
        p=p->link;
    }
}
void enqueue()
{
struct node *p;
struct node *q;
 newnode=(struct node* )malloc (sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=newnode;
    newnode->link=NULL;
    display();
}
void dequeue()
{
    struct node *p=head;
    p=head;
    head=p->link;
    free(p);
    display();
}
void main()
{
    create();
    display();
    dequeue();
     enqueue();
}