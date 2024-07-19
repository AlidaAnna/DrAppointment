#include<stdio.h>
void main()
{
int a[20][20],b[20][20],pro[20][20]={0},i,j,k,m,n,p,q,sumr=0,sumc=0;
printf("ENter the value of m And n:");
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
printf("row:\n");
              for(i=0;i<m;i++)
		{
                 sumr=0;
		for(k=0;k<n;k++)
                 {
               sumr+=a[i][k];
                 }
                 printf("%d\n",sumr);
		}
printf("column:\n");
              for(j=0;j<n;j++)
		{
		for(k=0;k<m;k++)
                 {
                 sumc+=a[k][j];
                 }
                 printf("%d\n",sumc);
                 sumc=0;
		}
}
