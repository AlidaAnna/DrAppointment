#include<stdio.h>
void main()
{
int a[10],n,i,count=0,c;
printf("Enter limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
c=count++;
}
printf("count is %d",c);
}

