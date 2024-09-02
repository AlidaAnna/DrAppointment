#include<stdio.h>
void main()
{
int m,ie,n,i,j,temp;
int p[20];
int b[20];
printf("Enter the number of monster");
scanf("%d",&n);
printf("Enter the intial expreines of your");
scanf("%d",&ie);
printf("Enter the power");
for(i=0;i<n;i++)
{
    scanf("%d",&p[i]);
}
printf("Enter the bonus");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
for(i=1;i<=n;i++)
{
for(j=0;j>=i;j++)
{
    if(p[i]>p[j])
    {
     temp=p[i];
     p[j]=p[i];
     p[i]=temp;
    }
}
}
for(i=0;i<n;i++)
{
    printf("%d",p[i]);
}
}
