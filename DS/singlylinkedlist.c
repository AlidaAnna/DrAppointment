#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head=NULL,*newnode;
void create()
{
	struct node *curptr;
	char ch;
	do{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element");
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
	printf("if you want add new node enter y");
	scanf(" %c",&ch);
    }
	while(ch=='Y'||ch=='y');
 }
 void display()
 {
 	struct node *p=head;
 	if(head==NULL)
 	{
 		printf("empty");
	 }
	 while(p!=NULL)
	 {	
	 	printf("%d ",p->data);
	 	//printf("%d ",p->link);
	 	p=p->link;
	 }
 }
 void insert_beg()
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter element");
 	scanf("%d",&newnode->data);
 	newnode->link=head;
 	head=newnode;
 	display();
 }
 void insert_end()
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter element");
 	scanf("%d",&newnode->data);
 	struct node *p=head;
 	if(p==NULL)
 	{
 	printf("empty");
	}
	while(p->link!=NULL)
	{
		p=p->link;
	}
	p->link=newnode;
	newnode->link=NULL;
		display();
 }
 void insert_after_given_info()
 {
 	int info;
 	struct node *p=head;
 	printf("enter the position to insert_after_given_info");
 	scanf("%d",&info);
 	while(p!=NULL)
 	{
 		if(p->data==info)
 		{
 			newnode=(struct node*)malloc(sizeof(struct node));
 			printf("enter data");
 			scanf("%d",&newnode->data);
 			newnode->link=p->link;
 			p->link=newnode;
		 }
		 p=p->link;
	 }
	 display();
 	
 }
 
 void 	delete_beg()
 {
 	if(head==NULL)
 	{
 		printf("empty");
	}
 	struct node *p;
 	p=head;
 	head=p->link;
 	free(p);
 	display();
 }
void delete_end()
{
	struct node *p;
	struct node *q;
	if(head->link==NULL)
	{
		head=NULL;
	}
	else
	{
	q=head;
	p=head;
	while(p->link!=NULL)
	{
	q=p;
	p=p->link;	
	}
	q->link=NULL;
	free(p);
    } 
    display();
}
void delete_given_info()
{
	struct node *p,*q;
	int info;
	if(head==NULL)
	{
		printf("empty");
	}
	printf("enter element ");
	scanf("%d",&info);
	if(head->data==info)
	{
		p=head;
		head=head->link;
		free(p);
	}
	else
	{
q=head;
p=head;
while(p!=NULL)
{
	q=p;
	p=p->link;
	if(p->data==info)
	{
		q->link=p->link;
		free(p);
	}
}
	display();
}
}
void main()
{
	int c;
	while(1)
	{
	printf("Enter your choices:\n 1:Create\n 2:display\n 3:insert at beg\n 4:insert at end\n 5:insert after given info \n6:deleting at beg \n 7:delete at end\n 8:delete at given info");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			create();
		break;
       case 2:
        display();
        break;
        case 3:
       	insert_beg();
       	break;
       	case 4:
       	insert_end();
       	break;
       	case 5:
       	insert_after_given_info();
       	break;
       	case 6:
       	delete_beg();
       	break;
       	case 7:
       	delete_end();
       	break;
       	case 8:
       	delete_given_info();
       	break;
		default:
		printf("Invalid");
	}
}
}