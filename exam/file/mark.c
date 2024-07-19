#include<stdio.h>
void main()
{
int m1,m2,m3,m4,m5,sum;
float avg;
printf("ENter 5 mark");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
printf("sum=%d",sum);
avg=sum/5;
printf("avg=%f",avg);
}


