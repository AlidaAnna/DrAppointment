#include<stdio.h>
struct stud
{
char name[20];
int age;
int id;
}s;
void dis(struct stud);
void main()
{
printf("Enter name:");
scanf("%s",s.name);
printf("Enter age:");
scanf("%d",&s.age);
printf("Enter id:");
scanf("%d",&s.id);
dis(s);
}
void dis(struct stud s)
{
printf("name:%s",s.name);
printf("age:%d",s.age);
printf("id:%d",s.id);
}
