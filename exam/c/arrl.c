#include<stdio.h>
void main()
{
int a[10],i,l,n,s;
printf("Enter the value of n:");
scanf("%d",&n);
printf("ENter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=a[i];
s=a[0];
for(i=0;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
}
if(a[i]<s)
{
s=a[i];
}
}
printf("Large is :%d small is : %d",l,s);
}

