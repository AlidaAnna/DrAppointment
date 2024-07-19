#include<stdio.h>
void main()
{
char s[20],c[20];
gets(s);
gets(c);
puts(s);
puts(c);
if(strcmp(s,c)==0)
{
printf("Equal");
}
else
{
printf("Not equal");
}
}


 
