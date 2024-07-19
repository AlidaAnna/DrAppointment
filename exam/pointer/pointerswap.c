#include<stdio.h>
void swap(int *,int *);
void main()
{
int a,b,*sa=&a,*sb=&b;
printf("Enter the value of a and b:");
scanf("%d %d",&a,&b);
swap(sa,sb);
}
void swap(int *sa,int *sb)
{
int t;
t=*sa;
*sa=*sb;
*sb=t;
printf("After swap:");
printf("a=%d,b=%d",*sa,*sb);
}

