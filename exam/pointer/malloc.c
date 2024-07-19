#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr;
ptr=(int *)malloc(sizeof(int));
printf("Enter a number:");
scanf("%d",ptr);
printf("%d",*ptr);
}


