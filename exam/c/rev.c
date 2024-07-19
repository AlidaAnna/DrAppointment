
#include<stdio.h>
#include<string.h>
char rev(char[],char[],int);
void main()
{
char a[20],r[20];
int f=0;
printf("Enter any character:");
gets(a);
rev(a,r,f);
}
char rev(char a[],char r[],int f)
{
int l,i,j;
for(l=0;a[l]!='\0';l++);
for(i=0,j=l-1;j>=0;j--,i++)
{
r[i]=a[j];
}
r[i]='\0';
if(strcmp(r,a)==0)
{
printf("p");
}
else
{
printf("np");
}
}
