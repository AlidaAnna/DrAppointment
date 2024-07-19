#include<stdio.h>
void main()
{
int a[10],i,limit;
printf("Enter the limit:");
scanf("%d",&limit);
printf("Enter the elements:");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("Elememts are:");
for(i=limit-1;i>=0;i--)
{
printf("%d",a[i]);
}
}

