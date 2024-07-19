#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("f1.txt","w");
if(fp==NULL)
{
printf("Not opened:");
}
printf("Enter charchter:");
while((ch=getchar())!=EOF)
putc(ch,fp);
fclose(fp);
}


