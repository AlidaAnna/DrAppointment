#include<stdio.h>
void main()
{
int a[20],sum,i,*p,n;
p=a;
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
sum=0;
for(i=0;i<n;i++)
{
printf("%d",*(p+i));
sum=sum+a[i];
}
printf("\nSum is %d",sum);
}

