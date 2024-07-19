#include<stdio.h>
void main()
	{
	int a[20],n,i,sum,avg,l,s;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the elements:");
	sum=0;
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		}
	printf("Elements are:\n");
	for(i=1;i<n;i++)
		{
		printf("%d",a[i]);
		printf("\n");
		}
	avg=sum/n;
	printf("Sum:%d",sum);
	printf("Avg:%d",avg);
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
		{
		if(a[i]>l)
			{
			l=a[i];
			}
			else if(a[i]<s)
				{
				s=a[i];
				}
		}
	printf("large:%dsmall:%d",l,s);
	}
