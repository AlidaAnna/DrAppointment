#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i;
float *ptr,sum=0,avg;
printf("Enter limit");
scanf("%d",&n);
ptr=(float *) malloc(n*sizeof(float));
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%f",ptr+i);
}
for(i=0;i<n;i++)
{
printf("%f",*(ptr+i));
sum=sum+*(ptr+i);
}
avg=sum/n;
printf("sum %f",sum);
printf("Avg %f",avg);
}


