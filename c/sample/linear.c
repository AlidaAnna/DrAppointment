#include<stdio.h>
void main()
{
    int i,n,a[10],item;
    printf("Enter the limit");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item to bearched");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
           printf("%d found at %d",item,i);
        }
    }
}