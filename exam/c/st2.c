#include<stdio.h>
struct stud
{
int rollno;
char name[20];
int mark[5];
};
void main()
{
struct stud s;
int i;
printf("Enter the rollno:");
scanf("%d",&s.rollno);
printf("Enter the name:");
scanf("%s",s.name);
printf("Enter the mark of 5 subject:");
for(i=0;i<5;i++)
{
scanf("%d",&s.mark[i]);
}
printf("details are:");
printf("\nRoll no:%d",s.rollno);
printf("\nname:%s",s.name);
printf("\nMarks:");
for(i=0;i<5;i++)
{
printf("%d \n",s.mark[i]);
}
}


