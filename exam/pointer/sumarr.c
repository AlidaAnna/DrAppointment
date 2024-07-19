#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a[20],*b[20],*s[20],m,n,p,q,i,j;
printf("Enter the limit:");
scanf("%d %d",&m,&n);
printf("Enter p and q");
scanf("%d %d",&p,&q);
for(i=0;i<n;i++)
{
a[i]=(int *)malloc(n*sizeof(int));
b[i]=(int *)malloc(n*sizeof(int));
s[i]=(int *)malloc(n*sizeof(int));
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",a[i]+j);
}
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",b[i]+j);
}
}
printf("Sum:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
*(s[i]+j)=*(a[i]+j)+*(b[i]+j);
printf("%d\t",*(s[i]+j));
}
}
printf("\n");
}


