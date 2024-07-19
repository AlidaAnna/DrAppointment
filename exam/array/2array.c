#include<stdio.h>
void main()
{
int a[20][20],i,n,m,j;
printf("Enter m and  n");
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
