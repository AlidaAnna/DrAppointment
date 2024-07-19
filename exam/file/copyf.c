#include<stdio.h>
void main()
{
FILE *fp,*fc;
char ch;
fp=fopen("file.txt","r");
fc=fopen("file1.txt","w");
while(1)
{
ch=getc(fp);
if(feof(fp))
break;
putc(ch,fc);
}
fclose(fp);
fclose(fc);
}
