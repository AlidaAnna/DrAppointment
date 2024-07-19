/*#include<stdio.h>
void main()
{
FILE *fp;
int n,eid,salary,i;
char name[50];
fp=fopen("file1.txt","w");
printf("Enter number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter your name:");
scanf("%s",name);
printf("Enter your empid");
scanf("%d",&eid);
printf("Enter your salary:");
scanf("%d",&salary);
fprintf(fp,"%s,%d,%d",name,eid,salary);
}
fclose(fp);
fp=fopen("file1.txt","r");
while(1)
{
fscanf(fp,"%s%d%d",name,&eid,&salary);
if(feof(fp))
break;
}
for(i=0;i<n;i++)
{
printf("%s",name);
printf("%d",eid);
}
fclose(fp);
}*/


#include<stdio.h>
void main()
{
FILE *fp;
int n,i,s,e;
char na[50];
fp=fopen("file.txt","w");
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("name:");
scanf("%s",na);
printf("id");
scanf("%d",&e);
printf("sal");
scanf("%d",&s);
fprintf(fp,"%s%d%d",na,e,s);
}
fclose(fp);
fp=fopen("file.txt","r");
while(1)
{
fscanf(fp,"%s%d%d",na,&e,&s);
if(feof(fp))
break;
}
for(i=0;i<n;i++)
{
printf("%s %d %d",na,s,e);
}
}

