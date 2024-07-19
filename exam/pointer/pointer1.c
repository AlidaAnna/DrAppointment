#include<stdio.h>
void main()
{
int p=10,*a;
a=&p;
printf(" address of p:%d",a);
printf("value of p:%d",p);
printf("address of PP:%d",&a);
}


