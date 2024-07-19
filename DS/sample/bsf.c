#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n)
{
    int temp,k,j;
    int i=1;
    while(i<n)
    {
        j=0;
        while(j<i)
        {
            if(a[j]>a[i])
            {
                temp=a[i];k=i;
                while(k>j)
                {
                    a[k]=a[k-1];
                    k=k-1;
                }
                a[j]=temp;
            }
            else
            {
                j=j+1;
            }
        }
        i=i+1;;
    }
    printf("AFter sorted\n");
      for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
      printf("\n"); 
}
void search(int a[],int n,int mid,int l,int u)
{
    int item;
l=0;
u=n-1;
printf("enter the elemnt to be searched");
scanf("%d",&item);
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
void main()
{
    int i,j,mid,l,u,a[10],n;
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
    sort(a,n);
    search(a,n,mid,l,u);
}