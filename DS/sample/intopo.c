#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 20
char infix[max];
char postfix[max];
char stack[max];
int top=-1;
int push(char symbol)
{
    if(top==max-1)
    {
        printf("satck is overflow");
    }
    else
    {
     top=top+1;
     stack[top]=symbol;
    }
}
int pop()
{
    char item;
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
         item=stack[top];
        top=top-1; 
    }
    return item;
}
int isempty()
{
    return top==-1;
}
int print()
{
    int i=0;
    printf("POSTFIX EVALUATION");
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
int precendences(char c)
{
    switch(c)
    {
        case '^':
        return 3;
        case '*':
        case'/':
        return 2;
        case '+':
        case '-':
        return 1;
    }
}
int intopo()
{
    int j=0;
    char symbol,next;
    for(int i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(!isspace(symbol))
        {
            switch(symbol)
            {
                case '(':
                pop(symbol);
                break;
                case ')':
                while((next=pop())!=')')
                {
                    postfix[j++]=next;
                }
                break;
                case '^':
                case '*':
                case'/':
                case'+':
                case '-':
                while(!isempty() && precendences(stack[top])>precendences(symbol))
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
printf("enter infix expression");
scanf("%s",infix);
intopo();
print();
}
