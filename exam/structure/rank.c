#include<stdio.h>
struct stud 
{
char name[20];
int mark[3];
int total;
};
void main()
{
struct stud  s[20],t;
int i,j,n;
printf("Enter student number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name :");
scanf("%s",s[i].name);
printf("Enter mark:");
s[i].total=0;
for(j=0;j<3;j++)
{
scanf("%d",&s[i].mark[j]);
s[i].total=s[i].total+s[i].mark[j];
}
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i].total<s[j].total)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("\t%d\n\t",i+1);
printf("%s\n",s[i].name);
printf("%d\n",s[i].total);
}
}




