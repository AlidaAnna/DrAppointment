#include<stdio.h>
struct book
{
char name[20];
int page;
int price;
}b[100];
void main()
{
int i,n;
printf("Enter limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("name:");
scanf("%s",b[i].name);
printf("Page:");
scanf("%d",&b[i].page);
printf("Prices:");
scanf("%d",&b[i].price);
}
for(i=0;i<n;i++)
{
printf("%s",b[i].name);
printf("%d",b[i].page);
printf("%d",b[i].price);
}
}

