#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("f1.txt","r");
while(!feof(fp))
{
ch=getc(fp);
printf("%c",ch);
}
fclose(fp);
}

