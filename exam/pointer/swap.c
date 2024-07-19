#include<stdio.h>
void swap(int ,int);
void main()
{
int a,b;
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
swap(a,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("value of a and b after swapping:\n");
printf("a=%d,b=%d",a,b);
}

