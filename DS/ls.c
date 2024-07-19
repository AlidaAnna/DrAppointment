#include<stdio.h>
void main()
{
    int a[20],i,item,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elemnets :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter the elements to be searched:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
    if(a[i]==item)
    {
    printf("%d is found at the location %d",item,i);
    }
    }
    if(i>=n)
    {
        printf("not found");
    }
}