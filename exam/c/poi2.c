#include<stdio.h>
void main()
{
int a,b,*pa,*pb,diff;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
pa=&a;
pb=&b;
diff=*pa-*pb;
printf("Differences is %d:",diff);
}

