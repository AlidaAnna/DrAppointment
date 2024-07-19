/*#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
int cl,ll=0;
char s[200],len[200];
fp=fopen("file.txt","r");
while(1)
{
fgets(s,200,fp);
if(feof(fp))
{
break;
}
else
{
cl=strlen(s);
if(cl>ll)
{
ll=cl;
strcpy(len,s);
}
}
}
printf("%s is %d",len,ll);
}
*/
#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
int curlen,longlen=0;
char s[200],len[200];
fp=fopen("file.txt","r");
while(1)
{
fgets(s,200,fp);
if(feof(fp))
{
break;
}
else
{
curlen=strlen(s);
if(curlen>longlen)
{
longlen=curlen;
strcpy(len,s);
printf("%s",s);
}
}
}
printf("%sis %d",len,longlen);
}

