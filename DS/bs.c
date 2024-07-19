#include<stdio.h>
int main()
{
    int i,n,l,u,mid,a[10],item;
    printf("Enter the number of elements in arayy");
    scanf("%d",&n);
    printf("Enter the elemnts in sorted order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    u=n-1;
    printf("Enter the item to be searched:");
    scanf("%d",&item);
   while(l<=u)
    {
    mid=(l+u)/2;
    if(a[mid]==item)
    {
        printf("%d found at the location %d",item,mid);
        return 0;
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
    if(l>u)
    {
        printf("item not found");
        return 0;
    }

    return 0;
}