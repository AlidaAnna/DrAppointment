#include<stdio.h>
#define max 20
int s[max];
int top=-1;
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",s[i]);
    }
}
void insert()
{
    int item;
    if(top==max-1)
    {
        printf("full");
    }
    else
    {
        printf("enter item");
        scanf("%d",&item);
     top=top+1;
     s[top]=item;
    }
}
void delete()
{
    if(top==-1)
    {
        printf("empty");
    }
    else
    {
        top=top-1;
    }

}
void main()
{
    insert();
    display();
    delete();
    display();
}