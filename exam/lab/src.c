#include<stdio.h>
void main()
{
int i,n,sum=0,rev=0,rem,c=0;
printf("N");
scanf("%d",&n);
for(i=0;n!=0;i++)
{
rem=n%10;
sum=sum+rem;
rev=rev*10+rem;
n=n/10;
c++;
}
printf("%d",c);
printf("%d",sum);
printf("%d",rev);
}

