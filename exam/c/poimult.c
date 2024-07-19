#include<stdio.h>
void main()
{
int a,b,*pa,*pb,mult;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
pa=&a;
pb=&b;
mult=(*pa)*(*pb);
printf("product is:%d",mult);
}

