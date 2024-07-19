/*#include<stdio.h>
char concat(char[],char[],char[]);
void main()
{
char a[20],b[20],c[20];
printf("Enter two string:");
gets(a);
gets(b);
concat(a,b,c);
printf("%s",c);
}
char concat(char a[],char b[], char c[])
{
int i,j;
for(i=0;a[i]!='\0';i++)
{
c[i]=a[i];
}
for(j=0;a[j]!='\0';j++)
{
c[i++]=b[j];
}
}
*/
#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20],s;
printf("enter two string:");
gets(a);
gets(b);
strcat(a,b);
printf("%s",a);
}

