#include<stdio.h>
void main()
{
int sy,ey,i;
printf("Enter a startyear and endyear:");
scanf("%d%d",&sy,&ey);
for(i=sy;i<=ey;i++)
{
if((i%4==0)&&(i%100!=0)||(i%400==0))
{
printf("%d",i);
}
printf("\n");
}
}
