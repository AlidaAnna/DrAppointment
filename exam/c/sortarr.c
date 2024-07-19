#include<stdio.h>
void main()
{
int a[20],n,j,i,temp;
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
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("%d",a[i]);
}
}
