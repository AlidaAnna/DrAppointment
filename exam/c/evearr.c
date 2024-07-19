#include<stdio.h>
void main()
{
float a[10];
int i,n;
printf("Enter the limit:");
scanf("%d",&n);
printf("ENTER THE ELEMents:");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
printf("Elemets are:");
for(i=0;i<n;i=i+2)
{
printf("%.2f",a[i]);
}
}

