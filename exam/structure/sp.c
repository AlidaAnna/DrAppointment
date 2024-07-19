#include<stdio.h>
struct person 
{
char name[20];
int age;
};
void main()
{
struct person p,*pp=&p;
printf("Enter name:");
scanf("%s",pp->name);
printf(" enter age:");
scanf("%d",&pp->age);
printf("name:%s,age:%d",pp->name,pp->age);
}

