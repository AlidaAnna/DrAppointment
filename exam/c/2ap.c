#include<stdio.h>
void main()
{
int a[20][20],i,j,n,m;
printf("Enter the limit:");
scanf("%d%d",&n,&m);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(a[i]+j));
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",*(a[i]+j));
}
printf("\n");
}
}


