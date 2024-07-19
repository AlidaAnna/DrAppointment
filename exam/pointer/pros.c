#include<stdio.h>
#include<stdlib.h>
void main()
{
int (*a)[10],(*b)[20],(*pro)[30],i,n,m,j,p,q,k;
printf("ENter the value of m And n:");
scanf("%d %d",&m,&n);
printf("ENter the value of p And q:");
scanf("%d %d",&p,&q);
if(n==p)
{
a=(int(*)[])malloc(m*4*4);
b=(int(*)[])malloc(p*4*4);
pro=(int(*)[])malloc(m*4*4);
                for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			scanf("%d",*(a+i)+j);
			}
		}
 		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			scanf("%d",*(b+i)+j);
			}
		}
	}
	printf("First matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("%d\t",*(*(a+i)+j));
			}
                 printf("\n");
		}
	printf("second matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			printf("%d\t",*(*(b+i)+j));
			}
                 printf("\n");
		}
            for(i=0;i<m;i++)
		{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
			*(*(pro+i)+j)+=*(*(a+i)+j)**(*(b+i)+j);
			}
		}
		}
        printf("pro\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{		
		printf("%d\t",*(*(pro+i)+j));
		}
printf("\n");
}
}
