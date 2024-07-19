#include<stdio.h>
#include<math.h>
void main()
{
float p,r,t,a;
printf("ENter p,t,r");
scanf("%f%f%f",&p,&t,&r);
a=p*(pow((1+r/100),t));
printf("ci:%f",a);
}

