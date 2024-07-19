#include<stdio.h>
void main()
{
int i,fn=0,sn=1,temp=0,n;
printf("n");
scanf("%d",&n);
printf("%d",fn,sn);
for(i=2;i<=n;i++)
{
temp=fn+sn;
printf("the value is %d",temp);
fn=sn;
sn=temp;
}
}
