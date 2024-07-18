#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,l,u,mid,a[10],item,temp,j;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
   printf(" sorted:");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter the element to be serached");
    scanf("%d",&item);
    l=0;
    u=n-1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(item==a[mid])
        {
            printf("%d found at location %d",item,mid);
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
    if(l>u)
    {
        printf("item not found in array");
    }
}