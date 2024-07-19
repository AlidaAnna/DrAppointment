#include<stdio.h>
#include<ctype.h>
void main()
{
char ch;
printf("Enter a character in upper case:");
scanf("%c",&ch);
printf("%c  in lower case is %c",ch,tolower(ch));
}

