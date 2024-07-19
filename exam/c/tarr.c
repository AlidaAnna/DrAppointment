#include<stdio.h>
void main()
{
int a[20],n,s,i,flag,p,count=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
