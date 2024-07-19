#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 20
char stack[max];
char infix[max];
char postfix[max];
int top=-1;
void push(char c)
{
    if(top==max-1)
    {
        printf("stack is overflow");
    }
    top=top+1;
    stack[top]=c;
}
char pop()
{
    char item;
    if(top==-1)
    {
        printf("stack is underflow");
    }
    item=stack[top];
    top=top-1;
    return item;
}
int precendences(char c)
{
switch(c)
{
    case '^':
    return 3;
    case '*':
    case '/':
    return 2;
    case '+':
    case '-':
    return 1;
    default:
    return 0;
}
}
int isempty()
{
        return top==-1;
    
}
int print()
{
    int i=0;
    printf("The  equvivalent postfix expression:\n");
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
void infixtopostfix()
{
    int i,j=0;
    char symbol,next;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(!isspace(symbol))
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
                while(!isempty() && precendences(stack[top])>=precendences(symbol))
                {
                    postfix[j++]=pop();
                }
                    push(symbol);
                    break;
        
                default:
                postfix[j++] = symbol;
                    break;

            }
        }
    }
     while (!isempty())
    {
        postfix[j++] = pop();
    }
    
    // Null-terminate the postfix expression
    postfix[j] = '\0'; 
}
void main()
{
    printf("Enter the infix expression");
    scanf("%s",infix);
    infixtopostfix();
    print ();
}