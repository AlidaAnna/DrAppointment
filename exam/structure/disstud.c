#include<stdio.h>
struct stud
{
char name[40];
int id;
};
void main()
{
struct stud s;
printf("Enter name:");
scanf("%s",s.name);
printf("Enter id");
scanf("%d",&s.id);
printf("%s%d",s.name,s.id);
}
 
