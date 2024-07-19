#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20];
printf("enter a striing:");
gets(a);
strcpy(b,a);
printf("after copy %s",b);
}

