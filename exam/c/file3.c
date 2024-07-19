#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("f.txt","w");
printf("Enter a charchter:");
scanf(" %c",&ch);
putc(ch,fp);
fclose(fp);
fp=fopen("f.txt","r");
ch=getc(fp);
printf("Charachter read from the file:%c",ch);
fclose(fp);
}


