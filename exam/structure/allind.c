#include<stdio.h>
void dis(char[],int,int);
struct stud
{
char name[20];
int age;
int id;
}s;
void main()
{
printf("Enter name:");
scanf("%s",s.name);
printf("Enter age:");
scanf("%d",&s.age);
printf("Enter id");
scanf("%d",&s.id);
dis(s.name,s.age,s.id);
}
void dis(char name[20],int age,int id)
{
printf("name:%s\n",name);
printf("age:%d\n",age);
printf("id:%d\n",id);
}

