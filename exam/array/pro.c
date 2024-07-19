#include<stdio.h>
void main()
{
int a[20][20],b[20][20],pro[20][20]={0},i,j,k,m,n,p,q,sumr1=0,sumc2=0;
printf("ENter the value of m And n:");
scanf("%d %d",&m,&n);
printf("ENter the value of p And q:");
scanf("%d %d",&p,&q);
	if(n!=p)
	{
	printf("Not posssible:");
	}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	printf("First matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("%d\t",a[i][j]);
			}
                 printf("\n");
		}
	printf("second matrix:\n");
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
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
			pro[i][j]+=a[i][k]*b[k][j];
			}
		}
		}
printf("sum\n");
                for(i=0;i<m;i++)
		{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
			sumr1+=a[i][k];
                        sumc2+=a[k][j];
			}

		}
		}
        printf("pro\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{		
		printf("%d\t",pro[i][j]);
		}
printf("\n");
	}
printf("%d\t",sumr1);
                        printf("%d\t",sumc2);
}

