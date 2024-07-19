#include<stdio.h>
void main()
{
int i,n,l=0,a[20];
printf("Enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=0;
for(i=0;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
}
}
printf("large:%d",l);
}

