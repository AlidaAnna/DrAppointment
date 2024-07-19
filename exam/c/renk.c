#include<stdio.h>
struct std
{
  int roll;
  char name[100];
  int mark[5];
  int total;
};
void main()
{
  struct std s[100],t;
  int n,i,j;
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter the details");
  for(i=0;i<n;i++)
  {
    printf("name");
    scanf("%s",s[i].name);
    printf("roll");
    scanf("%d",&s[i].roll);
    s[i].total=0;
    for(j=0;j<3;j++)
    {
       printf("mark %d",j+1);
       scanf("%d",&s[i].mark[j]);
       s[i].total+=s[i].mark[j];
     }
}
      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
         {
           if(s[i].total<s[j].total)
              {
                   t=s[i];
                   s[i]=s[j];
                   s[j]=t;
               }
           }
     }
printf("\nrank\t roll\t name\t mark\n");
for(i=0;i<n;i++)
{
  printf("%d\t%d",i+1,s[i].roll);
  printf("\t%s\t",s[i].name);
  printf("%d\t\n",s[i].total);
}
}

