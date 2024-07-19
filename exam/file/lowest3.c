#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 values");
scanf("%d%d%d",&a,&b,&C);
if(a<b&&a<c)
{
printf("%d is lessthan %d,%d",a,b,c);
}
else if(b<a&&b<c)
{
printf("%d is lessthan %d,%d",b,a,c);
}
else
{
printf("%d is lessthan %d,%d",c,a,b);
}
}
