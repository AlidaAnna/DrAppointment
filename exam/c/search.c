#include<stdio.h>
void main()
{
int a[20],n,s,i,flag,p,count=0;
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
printf("Enter the element to be searched:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("%d present at location %d\t",s,i);
count++;
}
}
if(count==0)
{
printf("%d is  not there in array:",s);
}
else
{
printf("\n%d is present %d times in array",s,count);
}
}



