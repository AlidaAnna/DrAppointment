#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("file.txt","w");
while((ch=getchar())!=EOF)
putc(ch,fp);
fclose(fp);
}
fp=fopen("file.txt","r");
while(1)
{
ch=getc(fp);
if(feof(fp))
break;
putchar(ch);
}
fclose(fp);
}



