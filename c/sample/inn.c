#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define max 20
char stack[max];
char postfix[max];
char infix[max];
int top=-1;
void push(char c)
{
if(top==max-1)
{
    printf("fulll");
}
top=top+1;
stack[top]=c;
}
int pop()
{
    char item;
    if(top==-1)
    {
        printf("empty");
    }
   item=stack[top];
   top=top-1;
   return item;
}
int prec(char c)
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
    default :
    return 0;

}
}
int isempty()
{
return top==-1;
}
int dis()
{
   
    int i=0;
     printf("POSTFIX EXPRESION");
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
}
void post()
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
                while(!isempty() && prec(stack[top])>=prec(symbol))
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
    printf("Enter postfix");
    scanf("%s",infix);
    post();
    dis();
}

