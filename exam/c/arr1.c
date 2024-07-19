#include<stdio.h>
void main()
{
int a[50],i,limit;
printf("Enter the limit:");
scanf("%d",&limit);
printf("Enter the Numbers:");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("Elements are\n:");
for(i=0;i<limit;i++)
{
printf("%d\t",a[i]);
}
}

