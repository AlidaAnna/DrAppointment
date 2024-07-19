#include<stdio.h>
struct book
{
char bname[20];
char aname[20];
int price;
};
void main()
{
struct book b[50];
int i,n;
printf("enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter Book name:");
scanf("%s",b[i].bname);
printf("Enter author name:");
scanf("%s",b[i].aname);
printf("Enter price:");
scanf("%d",&b[i].price);
}
printf("Book details:\n");
for(i=0;i<n;i++)
{
printf("\n%s",b[i].bname);
printf("\n%s",b[i].aname);
printf("\n%d",b[i].price);
}
}

