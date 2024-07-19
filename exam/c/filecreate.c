#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("file.txt","w");
printf("Enter the charchter:");
scanf(" %c",ch);
putc(ch,fp);
fclose(fp);
}

