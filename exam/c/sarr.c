#include<stdio.h>
void main()
{
int a[10],i,n,s,flag,p;
printf("enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be search:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(s==a[i])
{
flag=1;
p=i;
}
}
if(flag==1)
{
printf("the element is in ith postion:%d",p);
}
else
{
printf("no element");
}
}
