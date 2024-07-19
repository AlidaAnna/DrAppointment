#include<stdio.h>
int len(int[],int);
void main()
{
int i,n,a[i],le;
printf("Enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
len(a,n);
}
int len(int a[],int n)
{
int i,l=0;
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

