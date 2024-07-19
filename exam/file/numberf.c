#include<stdio.h>
void main()
{
FILE *fp;
int n;
fp=fopen("file1.txt","w");
if(fp==NULL)
{
printf("Error");
return;
}
printf("Enter numbers:");
scanf("%d",&n);
while(n != -1)
{
putw(n,fp);
scanf("%d",&n);
}
fclose(fp);
fp=fopen("file1.txt","r");
while(1)
{
n=getw(fp);
if(feof(fp))
break;
printf("%d",n);
}
fclose(fp);
}


