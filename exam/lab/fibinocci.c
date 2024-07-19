#include<stdio.h>
void main()
{
int i,fn=0,sn=1,temp=0,n;
printf("n");
scanf("%d",&n);
printf("%d",fn);
for(i=2;i<=n;i++)
{
printf("%d",sn);
temp=fn+sn;
fn=sn;
sn=temp;
}
}

