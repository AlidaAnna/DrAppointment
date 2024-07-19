#include<stdio.h>
void main()
{
int x,y,sum,*px,*py;
px=&x;
py=&y;
printf("Enter the value of x and y:");
scanf("%d %d",&x,&y);
sum=*px+*py;
printf("Sum is %d",sum);
}

