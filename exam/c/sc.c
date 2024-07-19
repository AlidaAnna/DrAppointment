#include<stdio.h>
int main(){
char s[20],search;
int i;
printf("Enter the string:");
scanf("%s",s);
puts(s);
printf("Enter the character to be replaced:");
scanf(" %c",&search);
for(i=0;s[i] != '\0';i++)
{
if(s[i] = search)
{
s[i]='x';
}
}
printf("Modified string is:%s\n",s);
return 0;
}

