#include<stdio.h>
void main()
{
int a[20],i,n,count=0;
printf("enter the limit");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("numbers are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%3==0)
{
count++;
}
else
{
a[i]=a[i]*3;
}
}
printf("Number of elements divisble by 3 is %d\t",count);
printf("numbers are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
}


