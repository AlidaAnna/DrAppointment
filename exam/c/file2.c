#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("f1.txt","w");
printf("Enter a charachter:");
scanf("%c",&ch);//enter akiya charachter read aki
putc(ch,fp);//enter akiya charchter fileil ittu
fclose(fp);
}

