#include<stdio.h>
int swap(int,int);
void main()
{
int a,b;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
printf("\nA:%d B:%d before swapping:",a,b);
swap(a,b);
printf("\nA:%dand B:%d after sapping in  function calling",a,b);
}
int swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("\nA:%dand B:%d after sapping in function defintion",a,b);
}
