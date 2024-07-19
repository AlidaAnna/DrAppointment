#include<stdio.h>
void main()
{
    int i,n,k,a[20],temp;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=1;
    while(i<n-1)
    {
        int j=0;
        while(j<i)
        {
            if(a[j]>a[i])
            {
             k=i;temp=a[i];
             while(k>j)
             {
                a[k]=a[k-1];
                k=k-1;
             }
            a[j]=temp;
            }
            j=j+1;
        }
        i=i+1;
    }
    printf("sorted");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}