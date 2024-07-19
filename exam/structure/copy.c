#include<stdio.h>
#include<string.h>
struct emp
{
char name[20];
int id;
};
void main()
{
struct emp e1={"anu",1},e2,e3;
printf("%s %d\n",e1.name,e1.id);
printf("One by one\n");
strcpy(e2.name,e1.name);
e2.id=e1.id;
printf("%s %d\n",e2.name,e2.id);
printf("every\n");
e3=e1;
printf("%s %d\n",e3.name,e3.id);
}


