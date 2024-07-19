#include<stdio.h>
void main()
{
int arr[5]={7,3,8,5,6},i,j,t;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]<arr[j])
{
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
}


