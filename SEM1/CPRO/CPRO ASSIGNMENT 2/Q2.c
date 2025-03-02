#include<stdio.h>
int main()
{
long M,S,O;
int T;
scanf("%d",&T);

for(int i=0;i<T;i++)
{
scanf("%ld %ld %ld",&M,&S,&O);
long ans=0;
if((M<=S)&&((M*2)<=O))
{
ans=M;
}
if((M<=S)&&((M*2)>O))
{
ans=O/2;
}
if((S<=M)&&((S*2)<=O))
{
ans=S;
}
if((S<=M)&&((S*2)>O))
{
ans=O/2;
}
printf("%ld\n",ans);
}
}