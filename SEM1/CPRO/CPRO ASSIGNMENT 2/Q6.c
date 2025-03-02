#include<stdio.h>
int main()
{
int T,N,M,R,C,a,count;
scanf("%d",&T);
int m_ab[T];
int m_or[T];
int m_d[T];
for(int i=0;i<T;i++)
{
scanf("%d %d %d %d",&N,&M,&R,&C);
int arr[N][M];
count=0;
//initialisation
for(int x=0;x<N;x++)
 {
  for(int y=0;y<M;y++)
  {
   scanf("%d",&a);
   arr[x][y]=a;
   if(a==1)
   {
    count++;
   }
  }
 }
//done
int ab[count];
int or[count];
int manhd[N*M];
int o=0;
int u=0;
int e=0;
for(int p=0;p<N;p++)
 {
  for(int q=0;q<M;q++)
  {
   if(arr[p][q]==1)
   {
    ab[o]=p;
    or[u]=q;
    o++;u++;
 manhd[e]=manhattandistance(R,C,p,q);
 e++;
   }
  }
 }
 int min=0;
 int z;
 for(int g=0;g<count;g++)
 {
 if(manhd[g]<min)
 {
 min=manhd[g];
 }
 }
 int mincount=0;
 for(int h=0;h<count;h++)
 {
 if(manhd[h]==min)
 {
 mincount++;
 }
 }
 if(mincount==1)
 {
for(int b=0;b<count;b++)
{
if(manhd[b]==min)
{
z=b;
}
}
m_ab[i]=ab[z];
m_or[i]=or[z];
m_d[i]=manhd[z];
 }
 else{

 }
}   
return 0;  //big for loop ends
}