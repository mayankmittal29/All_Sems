#include<stdio.h>
int main()
{
int T;

scanf("%d",&T);

for(int i=0;i<T;i++)
{
long M,S,O;
scanf("%ld %ld %ld",&M,&S,&O);
long ans=0;
if(M<S){
    if(2*M<=O)
{
ans=M;
}
else
{
ans=M-1;
}
}
else{
if(2*S<=O)
{
ans=S;
}
else
{
ans=S-1;
}
}
printf("%ld\n",ans);
}
return 0;
}