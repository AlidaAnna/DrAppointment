#include<stdio.h>
void sp(int *,int *);
void main()
{
int a,b,*pa,*pb;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
pa=&a;
pb=&b;
printf("\nbefore swapping in functioncalling is a=%d,b=%d",*pa,*pb);
sp(pa,pb);
printf("\nafter swappping in function calling is a=%d,b=%d",*pa,*pb);
}
void sp(int *pa,int *pb)
{
int temp;
temp=*pa;
*pa=*pb;
*pb=temp;
printf("\nAfter swappping in functionndefenction is a=%d,b=%d",*pa,*pb);
}
