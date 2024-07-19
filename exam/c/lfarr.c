#include<stdio.h>
int large(int[],int);
void main()
{
int a[10],n,i;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large(a,n);
}
 int large(int a[],int n)
{
int i,l;
l=a[i];
for(i=0;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
}
}
printf("Large is %d",l);
}


