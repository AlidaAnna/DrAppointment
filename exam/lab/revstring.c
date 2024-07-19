#include<stdio.h>
void rev();
void main()
{
printf("Enter a string");
rev();
}
void rev()
{
char ch;
ch=getchar();
if(ch!='\n')
{
rev();
}
putchar(ch);
}

