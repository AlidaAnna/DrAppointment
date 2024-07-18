#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 20
float stack[max];
int top=-1;
char st[max];
int sum()
{
    int result,operand1,operand2;
    operand1=stack[top];
    top=top-1;
    operand2=stack[top];
    top=top-1;
    result=operand2+operand1;
    top=top+1;
    stack[top]=result;
}
int differences()
{
    int result,operand1,operand2;
    operand1=stack[top];
    top=top-1;
    operand2=stack[top];
    top=top-1;
    result=operand2-operand1;
    top=top+1;
    stack[top]=result;
}
int product()
{
    int result,operand1,operand2;
    operand1=stack[top];
    top=top-1;
    operand2=stack[top];
    top=top-1;
    result=operand2*operand1;
    top=top+1;
    stack[top]=result;
}
int division()
{
    float result;
    int operand1,operand2;
    operand1=stack[top];
    top=top-1;
    operand2=stack[top];
    top=top-1;
    if(operand1!=0)
    {
    result=(float)operand2/operand1;
    top=top+1;
    stack[top]=result;
    }
    else
    {
     printf("Error");
     }
}
int power()
{
    int result=1,operand1,operand2;
    operand1=stack[top];
    top=top-1;
    operand2=stack[top];
    top=top-1;
    for(int i=0;i<operand1;i++)
    {
        result=result*operand2;
    }
    top=top+1;
    stack[top]=result;
}
int evaluatepostfix()
{
    int i;
    for(i=0;st[i]!='\0';i++)
  {
if(st[i]!=' ')
{
    switch(st[i])
    {
        case '+':
        sum();
        break;
        case '-':
        differences();
        break;
        case '*':
        product();
        break;
        case '/':
        division();
        break;
        case '^':
        power();
        break;
        default:
        top=top+1;
        stack[top]=st[i]-'0';
    }}
}
  printf("The result is %f",stack[top]);
}
void main()
{
printf("Enter the postfix expression");
scanf("%s",st);
evaluatepostfix();
} 