#include<stdio.h>
void main()
{
int a=10,b=20,*p,*j;
p=&a;
j=&b;
printf("value of &p is %d\n",&p);
printf("value of p is %d\n",p);
p=p+3;
printf("value of p is %d\n",p);
printf("value of a is %d\n",a);
printf("value of &a is %d\n",&a);
}
