#include<stdio.h>
void main()
{
int a=150;
int *p;
p=&a;
printf("value of a is %d\n",a);
printf("value of p is %d\n",p);
printf("Adress of a %d\n",&a);
printf("value of a usinf pointer %d\n",*p);
printf("adress of p:%d",&p);
}

