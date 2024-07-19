#include<stdio.h>
int min(int a[],int i,int n)
{
    int k,m,loc;
    k=i;
    m=a[i];
    loc=k;
    while(k<n)
    {
        if(a[k]<m)
        {
            m=a[k];
            loc=k;
        }
        k++;
    }
    return loc;
}
void main()
{
    int i,n,a[10],temp,loc;
    printf("Enter no");
    scanf("%d",&n);
    printf("Enter numbers");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]) ; 
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]) ; 
    }
    i=0;
    while(i<n-1)
    {
        loc=min(a,i,n);
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        i++;
    }
    printf("sorted elements");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
    
}