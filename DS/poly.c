#include<stdio.h>
#define max 10
struct poly
{
 int co;
 int exp;
};
void read(struct poly p[],int m)
{
      int i;
      for(i=0;i<m;i++)
 {
      printf("Enter the cofficent and exponent of term: %d",i+1);
      scanf("%d %d",&p[i].co,&p[i].exp);
 }
}
void dis(struct poly p[],int m)
{
      int i;
      for (i=0;i<m;i++)
 {
      printf("%dX^%d",p[i].co,p[i].exp);
      if(i<m-1)
      {
            printf("+");
      }
 }
}
void sum(struct poly p[],struct poly q[],struct poly r[],int m,int n)
      {
int i=0,j=0,k=0;
while(i<m&&j<n)
{
      if(p[i].exp==q[j].exp)
      {
            r[k].co=p[i].co+q[j].co;
            r[k].exp=p[i].exp;
            i=i+1,j=j+1,k=k+i;
      }
      else if(p[i].exp>q[j].exp)
      {
            r[k].co=p[i].co;
            r[k].exp=p[i].exp;
            i=i+1,k=k+1;
      }
      else 
      {
            r[k].co=q[j].co;
            r[k].exp=q[j].exp;
            k=k+1,j=j+1;
      }
}
while(i<m)
{
      r[k].co=p[i].co;
      r[k].exp=p[i].exp;
      k=k+1,i=i+1;
}
while(j<n)
{
      r[k].co=q[j].co;
      r[k].exp=q[j].exp;
      k=k+1,j=j+1;
}
printf("\nresult is:\n");
for(i=0;i<k;i++)
{
      printf("%dx^%d",r[i].co,r[i].exp);
      if(i<k-1)
      {
            printf("+");
      }
}
}
int main()
{
 int m,n,i,j,k;
 struct poly p[max],q[max],r[max];
 printf("Enter the number of terms in p");
 scanf("%d",&m);
 printf("Enter the number of terms in q");
 scanf("%d",&n);
 printf("Enter the coffients and exponent of  p\n");
 read(p,m);
 printf("Enter the coffients and exponent of  q\n");
 read(q,n);
 dis(p,m);
 printf("\n");
 dis(q,n);
 sum(p,q,r,m,n);
 return 0;
}


