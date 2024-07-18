#include<stdio.h>
void search(int a[],int n)
{
    int i,item;
    printf("enter the elemnt to be searched");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
           printf("%d found at location %d",item,i);
        }
    }
}
void main()
{
    int i,j,a[10],n;
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
    search(a,n);
}