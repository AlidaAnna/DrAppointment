#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 20
char stack[max];
char postfix[max];
char infix[max];
int top=-1;
void push(char c)
{
if(top==max-1)
{
    printf("stacck is full");
}
top=top+1;
stack[top]=c;
}
char pop()
{
    char item;
    if(top==-1)
    {
        printf("no element to pop");
    }
    item=stack[top];
    top=top-1;
    return item;
}
void printing()
{
   int i=0;
   while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}

int precedences(char c)
{
switch(c)
{
    case '^':
    return 3;

    case '*':
    case '/':
    return 2;
  
    case '+':
    case  '-':
    return 1;
  
    default:
    return 0;
}
}
int isempty()
{
    return top==-1;
}
void intopo()
{
    int i,j=0;
    char symbol,next;
    for(int i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        while(!isspace(symbol))
        {
        switch(symbol)
        {
        case '(':
        push(symbol);
        break;
        case ')':
        while((next=pop())!='(')
        {
            postfix[j++]=next;
        }
        break;
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
        while(!isempty() && precedences(stack[top])>=precedences(symbol))
        {
            postfix[j++]=pop();
        }
        push(symbol);
        break;
        default:
        postfix[j++]=symbol;
        break;
        }
        }
    }
    while(!isempty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}
void main()
{
printf("Enter infix expression");
scanf("%s",infix);
intopo();
printing();
}