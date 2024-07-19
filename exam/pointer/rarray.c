#include<stdio.h>
void main()
{
int a[10],n,i,*p;
p=a;
printf("Enter limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
}

