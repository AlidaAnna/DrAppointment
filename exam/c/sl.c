#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
int n;
printf("Enter a character:");
gets(s);
printf("ENTERED CHARACTER:");
puts(s);
n=strlen(s);
printf("length %d",n);
}

