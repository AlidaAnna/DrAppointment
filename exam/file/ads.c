#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int alpha=0,digit=0,sc=0;
fp=fopen("file.txt","w");
if(fp==NULL)
{
printf("error");
return;
}
while((ch=getchar())!=EOF)
putc(ch,fp);
fclose(fp);
fp=fopen("file.txt","r");
while(1)
{
ch=getc(fp);
if(feof(fp))
break;
if(isalpha(ch))
{
alpha++;
}
else if(isdigit(ch))
{
digit++;
}
else if(!isspace(ch))
{
sc++;
}
}
fclose(fp);
printf("alpha:%d",alpha);
printf("digit:%d",digit);
printf("sc:%d",sc);
}
/*
#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int c=0;
fp=fopen("file.txt","w");
if(fp==NULL)
{
printf("Error");
return;
}
printf("Enter a charcter:");
while((ch=getchar())!=EOF)
putc(ch,fp);
fclose(fp);
fp=fopen("file.txt","r");
while(1)
{
ch=getc(fp);
if(feof(fp))
break;
if(islower(ch))
c++;
}
fclose(fp);
printf("%d",c);
}
*/
