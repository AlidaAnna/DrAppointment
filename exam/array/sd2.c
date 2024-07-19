#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float x[20],mean,sum=0,v,sd;
printf("Enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
sum=sum+x[i];
}
mean=sum/n;
sum=0;
for(i=0;i<n;i++)
{
sum=sum+(x[i]-mean)*(x[i]-mean);
}
v=sum/n;
sd=sqrt(v);
printf("%f",sd);
return 0;
}
