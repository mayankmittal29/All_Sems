#include<stdio.h>
int main()
{
int T,n,count0,count1,max,min,v;
scanf("%d",&T);
int b[T];
for(int i=0;i<T;i++)
{
scanf("%d",&n);
int a[n];
count0=0;
count1=0;
  for(int j=0;j<n;j++)
   {
    scanf("%d",&a[j]);
    if(a[j]==-1)
   {
      count0++;
   }
    else
   {
      count1++;
   }
  }
  printf("\n");
  if((n%2)==0)
  {
   if(count0>count1)
  {
    b[i]=(count0-count1)/2;
  }
   else if(count1>count0)
  {
    b[i]=(count1-count0)/2;
  }
  else
  {
    b[i]=-1;
  }
 }
 else{
  b[i]=-1;
 }
}
 for(int k=0;k<T;k++)
{
  printf("%d\n",b[k]);
}
return 0;
}