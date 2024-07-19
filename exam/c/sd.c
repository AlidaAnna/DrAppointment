#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
float a[50],sum=0,m,v,sd;
printf("Enter the value of n");
scanf("%d",&n);
printf("Elements :\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
sum=sum+a[i];
}
printf("Elements are:\n");
for(i=0;i<n;i++)
{
printf("%.2f\t",a[i]);
}
printf("\nsum is %.2f",sum);
m=sum/n;
sum=0;
for(i=0;i<n;i++)
{
sum=sum+(a[i]+m)*(a[i]+m);
}
v=sum/n;
sd=sqrt(v);
printf("\nSd is %f",sd);
}

