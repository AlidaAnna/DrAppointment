#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,mid,u,l,a[10],item;
    printf("enter the number of eelemnts in the array");
    scanf("%d",&n);
    printf("Enter the elemnsts in sorted order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    l=0;
    u=n-1;
    printf("Enter the elements to be search");
    scanf("%d",&item);
    while(l<=u)
    {
        mid=(l+u)/2;
        if(a[mid]==item)
        {
            printf("item found at loc %d",mid);
            exit(0);
        }
        else if(item<a[mid])
        {
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(l>=u)
    {
        printf("item not found");
    }
}