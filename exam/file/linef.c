#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int l=0,w=0,c=0;
fp=fopen("file.txt","r");
if(fp==NULL)
{
printf("ERROR");
}
while(1)
{
ch=getc(fp);
if(feof(fp))
break;
if(ch=='\n')
{
l++;
}
else if(ch==' ')
{
w++;
}
else
{
c++;
}
}
fclose(fp);
printf("%d",l);
printf("%d",w);
printf("%d",c);
}

