#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("file.txt","w");
printf("Enter the text");
while((ch=getchar())!=EOF)
putc(ch,fp);
fclose(fp);
}

