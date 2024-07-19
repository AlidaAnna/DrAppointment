#include<stdio.h>
void main()
{
int a[20],i,n,s,count=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter number:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("numbers:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("cubes:");
for(i=0;i<n;i++)
{
a[i]=a[i]*a[i]*a[i];
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
printf("\n");
}
printf("enter the element to be searched:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
count++;
}
}
printf("searched number occured is %d",count);
}



