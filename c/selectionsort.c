#include<stdio.h>
int  min(int a[],int i,int n)
{
    int k,m,loc;
    k=i;
    m=a[k];
    loc=k;
    while(k<n)
    {
        if(a[k]<m)
        {
            loc=k;
            m=a[k];
        }
        k=k+1;
    }
    return loc;
}
void main()
{
    int i,n,a[20],loc,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n-1)
    {
    loc=min(a,i,n);
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
    i=i+1;
    }
    printf("Elements after sorted\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}