#include<stdio.h>
int main()
{
int T,N,M,index,max,count,t;
scanf("%d",&T);
int b[T];
for(int i=0;i<T;i++)
 {
   scanf("%d %d",&N,&M);
   int a[N];
   int c[N];
  for(int j=0;j<N;j++)
   {
     scanf("%d",&a[j]);
   }
     
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
   }
   //We have calculated the frequency of all elements.


   max=0,t=0;
   for(int p=0;p<N;p++)
   {
   if(c[p]>max)
   {
   max=c[p];
   t=p;
   }
   }
   //Found the max frequency in c

   int countmax=0;
   for(int q=0;q<N;q++)
   {
   if(c[q]==max)
   {
   countmax++;
   }
   }
   if(countmax>1)
   {
    b[i]=-1;
   }
   else{
    b[i]=a[t];
   }
printf("\n");
}
printf("\n");
for(int w=0;w<T;w++)
{
printf("%d\n",b[w]);
}
return 0;
}