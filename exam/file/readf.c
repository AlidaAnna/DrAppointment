#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("file.txt","r");
if(fp==NULL)
{
printf("Errror");
}
ch=getc(fp);
printf(" %c",ch);
}

