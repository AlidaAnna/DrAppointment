#include<stdio.h>
struct per 
{
char name[20];
int age;
}p[20];
void dis(struct per[],int);
void main()
{
int i,n;
printf("Enter  n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name:\n");
scanf("%s",p[i].name);
printf("Eter age:\n");
scanf("%d",&p[i].age);
}
dis(p,n);
}
void dis(struct per p[],int n)
{
int i;
char s[20];
printf("Enter the name to be searched:");
scanf("%s",s);
for(i=0;i<n;i++)
{
if(strcmp(s,p[i].name)==0)
{
printf("name:%s",p[i].name);
printf("age:%d",p[i].age);
}
}
}



