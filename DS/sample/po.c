#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define max 20

char postfix[max];
int stack[max];
int top = -1;

void sum()
{
    int op1, op2, result;
    op1 = stack[top];
    top = top - 1;
    op2 = stack[top];
    top = top - 1;
    result = op1 + op2;
    top = top + 1;
    stack[top] = result;
}

void diff()
{
    int op1, op2, result;
    op1 = stack[top];
    top = top - 1;
    op2 = stack[top];
    top = top - 1;
    result = op1 - op2;
    top = top + 1;
    stack[top] = result;
}

void pro()
{
    int op1, op2, result;
    op1 = stack[top];
    top = top - 1;
    op2 = stack[top];
    top = top - 1;
    result = op1 * op2;
    top = top + 1;
    stack[top] = result;
}

void div()
{
    int op1, op2; 
    float result;
    op1 = stack[top];
    top = top - 1;
    op2 = stack[top];
    top = top - 1;
    
    if (op2 != 0)
    {
        result = (float)op1 / op2;
        top = top + 1;
        stack[top] = result;
    }
    else
    {
        printf("Error: Division by zero\n");
        // Handle error condition appropriately
    }
}

void powe()
{
    int op1, op2, result;
    op1 = stack[top];
    top = top - 1;
    op2 = stack[top];
    top = top - 1;
    result = 1;
    
    for (int i = 0; i < op1; i++)
    {
        result = result * op2;
    }
    
    top = top + 1;
    stack[top] = result;
}

void poev()
{
    char symbol;
    
    for (int i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];
        
        if (!isspace(symbol))
        {
            switch(symbol)
            {
                case '+':
                    sum();
                    break;
                case '-':
                    diff();
                    break;
                case '*':
                    pro();
                    break;
                case '/':
                    div();
                    break;
                case '^':
                    powe();
                    break;
                default:
                    top = top + 1;
                    stack[top] = symbol - '0';
                    break;
            }
        }
    }
}

void  main()
{
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);  
    poev();
    printf("The result is %d\n", stack[top]);
    
}