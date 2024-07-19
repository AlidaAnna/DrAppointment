#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*head,*newnode,*curptr;
void create()
{
char ch;
do
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter newnode");
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
    printf("if you want to add new node enter y");
    scanf(" %c",&ch);
}
while(ch=='Y'||ch=='y');
}
void display()
{
struct node *p=head;;
if(head==NULL)
{
    printf("empty");
}
while(p!=NULL)
{
    printf("%d",p->data);
    p=p->link;
}
} 

void  insert_at_beg()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->link=head;
        head=newnode;
    }
    display();
}
void insert_at_end()
{
 
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
       struct node *p=head;
while(p->link!=NULL)
{
    p=p->link;
}
p->link=newnode;
newnode=NULL;
}
void insert_bet()
{
    int item;
    struct node *p=head;
    struct node *q=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter new");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    printf("Enter the pos");
    scanf("%d",&item);
    while(p->link!=NULL)
    {
        if(p->data==item)
        {
            newnode->link=p->link;
            p->link=newnode;
        }
        p=p->link;
    }
}
void delete_beg()
{
    struct node *p=head;
    head=p->link;
    free(p);
}
void delete_end()
{
    struct node *p=head;
    struct node *q=head;
    if(head->link==NULL)
	{
		head=NULL;
	}
	else
	{
    while(p->link!=NULL)
    {
        q=p;
        p=p->link;
    }
    q->link=NULL;
    free(p);
    }
}
void delete_bt()
{
    int item;
    struct node *p=head;
    struct node *q=head;
    if(head==NULL)
	{
		printf("empty");
	}
    printf("Enter elements");
    scanf("%d",&item);
    while(p->link!=NULL)
    {
        if(p->data==item)
        {
          q->link=p->link;
          free(p);
        }
    q=p;
    p=p->link;
    }
    
    
}
void main()
{
    create();
    display();
    insert_at_beg();
    insert_at_end();
    display();
    insert_bet();
    display();
    delete_beg();
    display();
    delete_end();
    display();
     delete_bt();
    display();
}