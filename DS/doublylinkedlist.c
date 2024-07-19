#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
}*head=NULL,*newnode;
void create()
{
    struct node *curptr;
    char ch;
    do
    {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter the element");
       scanf("%d",&newnode->data) ;
       newnode->rlink=NULL;
       if(head==NULL)
       {
        head=newnode;
        newnode->llink=NULL;
         
       }
       else
       {
        curptr->rlink=newnode;
        newnode->llink=curptr;
        
       }
       curptr=newnode;
       printf("if you want to add one more node press y");
       scanf("%*c%c",&ch);
    }
 while(ch=='Y'||ch=='y');
}
void display()
{
    struct node *p;
    struct node *ptr;
    if(head==NULL)
    {
        printf("empty");
        return ;
    }
    p=ptr=head;
     printf("forward\n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        ptr=p;
        p=p->rlink;
    }
    printf("Backward\n");
     while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->llink;
    }

}
void  insert_at_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->llink=NULL;
        newnode->rlink=NULL;
    }
    newnode->llink=NULL;
    newnode->rlink=head;
    head->llink=newnode;
    head=newnode;
}
void insert_at_end()
{
    struct node *p;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the elemnts:");
    scanf("%d",&newnode->data);
     newnode->rlink=NULL;
    p=head;
    while(p->rlink!=NULL)
    {
        p=p->rlink;
    }
    newnode->llink=p;
    p->rlink=newnode;
}
void insert_after_given_info()
{
    int info;
    struct node *ptr;
     struct node *p;
     p=head;
     ptr=head;
    printf("Enter the info");
    scanf("%d",&info);
    while(p->rlink!=NULL)
    {
        if(p->data==info)
        {
            newnode =(struct node *)malloc (sizeof(struct node));
             printf("enter the elemnts:");
             scanf("%d",&newnode->data);
             if(p->rlink==NULL)
             {
                p->rlink=newnode;
                newnode->llink=p;
                newnode->rlink=NULL;
             }
             else
             {
             ptr=p->rlink;
             newnode->llink=p;
             newnode->rlink=ptr;
             ptr->llink=newnode;
             p->rlink=newnode;
            
             }
        }
        p=p->rlink;
    }
}
void  delete_beg()
{
    if(head==NULL)
    {
        printf("empty");
    }
    if(head->rlink=NULL)
    {
        head=NULL;
    }
    head->rlink->llink=NULL;
    head=head->rlink;
}
void  delete_at_end()
{
struct node *p;
p=head;
if(head=NULL)
{
    printf("Empty");
}if(head->rlink==NULL) //Only onr node?
    {
        head=NULL;
    }
    else
    {
        p=head;
        while(p->rlink!=NULL)
        {
            p=p->rlink;
        }
        p->llink->rlink=NULL;
    }
}
void delete_given_info()
{
    struct node *p;
     struct node *next;
      struct node *prev;
    int info;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("\nEnter the information you want to delete: ");
    scanf("%d",&info);
    if(head->data==info) //Given info in first node?
    {
        if(head->rlink==NULL) //One node?
        {
            head=NULL;
        }
        else
        {
            head=head->rlink;
            head->llink=NULL;
        }
        return;
    }
    p=head->rlink;
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
                prev=p->llink;
                next=p->rlink;
                prev->rlink=next;
                next->llink=prev;
            }
            return;
        }
        p=p->rlink;
    }
    if(p==NULL)
    {
        printf("Given information is not present in the list");
    }
}

void main()
{
    int ch;
    while(1)
    {
    printf("Enter your choices 1:create 2:display 3:insert_at_beg 4:insert_at_end 5:insert_after_given_info 6: delete_beg 7:delete_at_end 8 info");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    create();
    display();
    break;
    case 2:
    display();
    break;
    case 3:
    insert_at_beg();
    display();
    break;
    case 4:
    insert_at_end();
    display();
    break;
    case 5:
    insert_after_given_info();
    display();
    break;
    case 6:
    delete_beg();
    display();
    break;
    case 7:
    delete_at_end();
    display();
    break;
     case 8:
     delete_given_info();
    display();
    break;
    }
    }
}