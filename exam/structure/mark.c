#include<stdio.h>
struct stud 
{
char name[20];
int id;
int mark[5];
}s;
void main()
{
int i;
printf("enter name :");
scanf("%s",s.name);
printf("Enter id;");
scanf("%d",&s.id);
printf("Enter 3 mark:");
for(i=0;i<3;i++)
{
scanf("%d",&s.mark[i]);
}
printf("details:");
printf("Name:%s",s.name);
printf("Id:%d",s.id);
for(i=0;i<3;i++)
{
printf("%d",s.mark[i]);
}
}
