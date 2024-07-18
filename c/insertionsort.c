#include<stdio.h>
void main()
{
    int i,j,k,a[20],n,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
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
                j=j+1;
            }
        }
        i=i+1;
    }
printf("After sorted");
  for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}