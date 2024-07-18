#include<stdio.h>
#include<stdlib.h>
#define max 20
int top=-1,s[max];
int  display()
{
    int i;
    if(top==-1)
    {
    printf("Empty");
    return 1;
    }
    printf("\nElements in the stack are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow");
        exit(0);
    }
    else
    {
    item=s[top];
    top=top-1;
    }
    printf("Deleted item is %d",item);
    display();

}
int push()
{
    int item;
    if(top==max-1)
    {
        printf("Stack is overflow");
        exit(0);
    }
    else
    {
    printf("Enter the element");
    scanf("%d",&item);
    top=top+1;
    s[top]=item;
    }
    display();
    
}

void main()
{
    int ch;
    while(1)
    {
    printf("Enter your choices 1:PUSH 2:POP 3:DISPLAY");
    scanf("%d",&ch);
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
    }
    }
}