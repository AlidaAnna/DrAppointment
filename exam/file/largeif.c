#include<stdio.h>
void main()
{
int a,b;
printf("Enter two number:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is greater than %d",a,b);
}
else
{
printf("%d greater than %d",b,a);
}
}
