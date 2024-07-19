#include<stdio.h>
void main()
{
    int i,j,k,n,a[10],temp;
    printf("Enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("number before sorted");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    i=1;
    while(i<n)
    {
        j=0;
        while(j<i)
        {
            if(a[j]>a[i])
            {
            k=i;
            temp=a[i];
            while(k>j)
            {
                a[k]=a[k-1];
                k=k-1;
            }
            a[j]=temp;
        
            }
            else{
 j++;
            }
           
        }
        i++;
    }
     printf("number after sorted");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}