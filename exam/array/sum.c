#include<stdio.h>
void main()
{
int a[20][20],b[20][20],sum[20][20],i,n,m,j,p,q;
printf("Enter m and  n");
scanf("%d %d",&m,&n);
printf("Enter p and  q");
scanf("%d %d",&p,&q);
if(m!=p||n!=q)
{
printf("Not possible");
return 0;
}

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
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf(" SUM%d\t",sum[i][j]);
		}
        printf("\n");
	}
}
