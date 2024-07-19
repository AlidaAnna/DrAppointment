/*#include<stdio.h>
int len(char[]);
void main()
{
char s[20];
int l;
printf("Enter the characters:");
gets(s);
l=len(s);
printf("Length:%d",l);
}
int len(char s[])
{
int i,count=0;
for(i=0;s[i]!='\0';i++)
{
count ++;
}
return count;
}
*/
#include<stdio.h>
int len(char[]);
void main()
{
char a[20];
int l;
printf("Enter string:");
gets(a);
l=len(a);
printf("Length of string is:%d",l);
}
int len(char a[])
{
int i,c=0;
for(i=0;a[i]!='\0';i++)
{
c++;
}
return c;
}
