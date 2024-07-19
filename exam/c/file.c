#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("file.txt","w");
if(fp!=NULL)
{
printf("File created:");
}
fclose(fp);
}
