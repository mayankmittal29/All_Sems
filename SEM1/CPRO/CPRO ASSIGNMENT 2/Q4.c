#include<stdio.h>
int main()
{
int T,n,count0,count1,max,min,v;
scanf("%d",&T);
for(int i=0;i<T;i++)
{//starts
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
  if((n%2)==0)
  {
   if(count0>count1)
  {
    printf("%d\n",((count0-count1)/2));
  }
   else if(count1>count0)
  {
    printf("%d\n",((count1-count0)/2));
  }
  else
  {
    printf("%d\n",0);
  }
}
else{
  printf("%d\n",-1);
}
}
return 0;
}