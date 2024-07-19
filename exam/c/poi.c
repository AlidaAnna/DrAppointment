#include<stdio.h>
void main()
{
int a,b,*pa,*pb,sum;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
pa=&a;
pb=&b;
sum=*pa+*pb;
printf("Sum is %d",sum);
}

