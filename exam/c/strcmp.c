#include<stdio.h>
int cmp(char[],char[]);
void main()
{
char a[20],b[20];
int s;
printf("Enter two string:");
gets(a);
gets(b);
s=cmp(a,b);
if(sf==0)
{
printf("equal:");
}
else 
{
printf("not equal");
}
}
int cmp(char a[],char b[])
{
int i,flag;
for(i=0;a[i]!='\0'&& b[i]!='\0';i++)
{
if(a[i]!=b[i])
{
flag=1;
break;
}
}
if(flag==0)
{
return 0;
}
else
{
return 1;
}
}
