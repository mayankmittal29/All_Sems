#include<stdio.h>
int main()
{
int T,N,M,index,max,count,countmax,t;
scanf("%d",&T);
for(int i=0;i<T;i++)
 {
   scanf("%d %d",&N,&M);
   int a[N];
   int c[N]; 

  for(int j=0;j<N;j++)
   {
     scanf("%d",&a[j]);
   }
   max=0;
   countmax=0;
   t=0; 
  for(int x=0;x<N;x++)
   {
    count=1;
    for(int y=x+1;y<N;y++)
    {
    if(a[x]==a[y])
    {
    count++;
    }
    }
    c[x]=count;
    if(c[x]>max)
    {
    max=c[x];
    }
   }
   //We have calculated the frequency of all elements in c array.
  // found the max frequency element
   for(int q=0;q<N;q++)
   {
   if(c[q]==max)
   {
   countmax++;
   t=q;
   }
   }
   if(countmax>1)
   {
    printf("%d\n",-1);
   }
   else{
    printf("%d\n",a[t]);
   }
}
return 0;
}