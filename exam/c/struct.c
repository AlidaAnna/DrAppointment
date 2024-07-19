#include<stdio.h>
struct student 
{
int rollno;
char name[20];
int age;
};
void main()
{
struct student s;
printf("Rollno:");
scanf("%d",&s.rollno);
printf("name:");
scanf("%s",s.name);
printf("age:");
scanf("%d",&s.age);
printf("%d\n%s\n%d\n",s.rollno,s.name,s.age);
}


