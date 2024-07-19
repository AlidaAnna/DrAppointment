#include<stdio.h>
void main()
{
FILE *fp,*fe,*fo;
int n,e,o;
fp=fopen("file1.txt","w");
fe=fopen("even.txt","w");
fo=fopen("odd.txt","w");
if(fp==NULL)
{
printf("Error");
}
printf("enterthe number");
scanf("%d",&n);
while(n!=-1)
{
putw(n,fp);
scanf("%d",&n);
}
fclose(fp);
fp=fopen("file1.txt","r");
while(1)
{
n=getw(fp);
if(feof(fp))
break;
if(n%2==0)
{
putw(n,fe);
}
else
{
putw(n,fo);
}
}
fclose(fp);
fclose(fe);
fclose(fo);
fe=fopen("even.txt","r");
fo=fopen("odd.txt","r");
while(1)
{
e=getw(fe);
if(feof(fe))
break;
printf("%d",e);
}
while(1)
{
o=getw(fo);
if(feof(fo))
break;
printf("%d",o);
}
}


