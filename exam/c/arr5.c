#include<stdio.h>
void main()
{
int i,n,a[10];
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("Elemets after adding 5:");
for(i=0;i<n;i++)
{
a[i]=a[i]+5;
printf("%d",a[i]);
}
}
