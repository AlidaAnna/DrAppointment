#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
}*head=NULL,*newnode;
void create()
{    char ch;
    struct node *curptr;
    do
   {
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->llink=NULL;
    newnode->rlink=NULL;
    if(head==NULL)
    {
        head=newnode;
        curptr=newnode;
    }
    else{
        newnode->llink=curptr;
        curptr->rlink=newnode;
        curptr=newnode;
    }
      printf("if you want to add one more node enter Y");
    scanf(" %c",&ch);
}
    while(ch=='y'||ch=='Y');
}
void display()
{
    struct node *p,*q;
    p=head;
    q=head;
    while(p!=NULL)
    {
        q=p;
        printf("%d",p->data);
        p=p->rlink;
    }
}
void insert_beg()
{
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    head->llink=newnode;
    newnode->rlink=head;
    head=newnode;
    display();
}
void insert_end()
{
    struct node *p=head;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->rlink=NULL;
    while(p->rlink!=NULL)
    {
        p=p->rlink;
    }
    newnode->llink=p;
    p->rlink=newnode;
    display();
}
void insertbtwn()
{
    struct node *p=head;
    int info;
    printf("enter the position to insert_after_given_info");
 	scanf("%d",&info);
    while(p->rlink!=NULL)
    {
    if(p->data==info)
    {
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
     newnode->rlink=p->rlink;
    newnode->llink=p;
     p->rlink->llink=newnode;
    p->rlink=newnode;
    }
    p=p->rlink;
     }
      display();
}
void deletebeg()
{
    struct node *p=head;
    head->rlink->llink=NULL;
    head=p->rlink;
    free(p);
    display();
}
void end()
{
struct node *p;
while(p->rlink!=NULL)
{
    p=p->rlink;
}
p->llink->rlink=NULL;
display();
}
void btn()
{
    struct node *p=head;
    int info;
    printf("enter the position to delete info");
 	scanf("%d",&info);
   if(p->data==info)
   {
      if(head->rlink==NULL)
     {
     head=NULL;
     }
     else{
        head=head->rlink;
        head->llink=NULL;
     } p=head->rlink;
    while(p!=NULL)
    {
        if(p->data==info)
        {
            if(p->rlink==NULL) //Last node?
            {
                p->llink->rlink=NULL;
            }
            else
            {
                newnode->rlink=p->rlink;
                newnode->llink=p;
                p->rlink=newnode;
                newnode->rlink->llink=newnode;
            return;
        }
        p=p->rlink;
    }
    if(p==NULL)
    {
        printf("Given information is not present in the list");
    }
}
    }
    display();
}
void main()
{
create();
display();
insert_beg();
insert_end();
insertbtwn();
deletebeg();
end();
btn();
}