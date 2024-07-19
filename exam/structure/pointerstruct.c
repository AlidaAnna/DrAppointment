#include<stdio.h>
struct stud
{
char name[20];
int age;
}s,*ss=&s;
void dis(struct stud *s)
{
printf("name:%s\n",ss->name);
printf("age:%d\n",ss->age);
}
void main()
{
printf("Enter name:");
scanf("%s",ss->name);
printf("Enter age:");
scanf("%d",&ss->age);
dis(ss);
}
