#include<stdio.h>
#define max 20
int top=-1;
int stack[max];
int display()
{
    if(top==-1)
    {
        printf("stack is underflow");
    }
    printf("elements is");
    for(int i=top;i>=0;i--)
    {
    printf("%d",stack[i]);
    }
}
void push()
{
    int item;
    if(top==max-1)
    {
        printf("stack is overflow");
    }
    printf("Enter the item");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
    display();
}
int pop()
{
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    int item=stack[top];
    top=top-1;
    display();
}

void main()
{
    int ch;
    while(1)
    {
    printf("enter your choices:1:push,2:pop,3:display");
    scanf("%d \n",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break; 
        case 3:
        display();
        break;
        default:
        printf("invalid");
        break;
    }
    }
}