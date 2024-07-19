#include<stdio.h>
#include<string.h>
int main()
{
char s[20],search;
int i;
printf("Enter the string:");
scanf("%s",s);
getchar();
puts(s);
printf("Enter the value to be searched:");
search=getchar();
putchar(search);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==search)
{
s[i]='x';
}
}
printf("String is:%s",s);
return 0;
}



