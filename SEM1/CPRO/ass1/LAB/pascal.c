#include<stdio.h>
int fac(int o);
int p(int a,int b);
int pro=1;
int p(int a,int b)
{
return fac(a)/(fac(b)*fac(a-b));
}
int fac(int o)
{
if(o==0)
{
return 1;
}
else
{
for(int y=1;y<=o;y++)
{
pro=pro*y;
}
return pro;
}
}
int main()
{
int r;
printf("Enter the number of rows -");
scanf("%d",&r);
for(int i=1;i<=r;i++)
{
 for(int j=r;j>=i;j--)
 { 
   printf(" ");
 }
for(int k=0;k<i;k++)
 {
   printf(" %d 1",p(i,k));
 }
printf("\n");
}
}