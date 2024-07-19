#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 value");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is greaterthan %d,%d",a,b,c);
}
else if(b>c)
{
printf("%d is greaterthan %d,%d",b,a,c);
}
else
{
printf("%d is greaterthan %d,%d",c,a,b);
}
}

