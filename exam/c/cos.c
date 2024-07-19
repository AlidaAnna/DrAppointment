/*#include<stdio.h>
char copy(char[],char[]);
void main()
{
char s1[20],s2[20],c;
printf("Enter a string:");
gets(s1);
copy(s1,s2);
printf("value of s2 after copy value of s1  to s2 is:%s",s2);
}
char copy(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];
}
}
*/
#include<stdio.h>
char sc(char[],char[]);
void main()
{
char a[2],b[20],c;
printf("enter a string:");
gets(a);
sc(a,b);
printf("copy to b is%s",b);
}
char sc(char a[],char b[])
{
int i;
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
}
}
 
