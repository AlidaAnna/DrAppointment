#include<stdio.h>
void main()
{
int a[20],i,n,*p;
printf("Enter the limit:");
scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
{
printf("\n%d",*(a+i));
}
}
