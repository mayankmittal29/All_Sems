#include<stdio.h>
int main()
{
int T,N,K,Q1,Q2,Q3,Q4,a,b,c,d;
scanf("%d",&T);
int out[T];
for(int i=0;i<T;i++)
{
scanf("%d %d",&N,&K);
int X[N];
int Y[N];
Q1,Q2,Q3,Q4,a,b,c,d=0;
//initialisation
for(int j=0;j<N;j++)
{
scanf("%d %d",&X[j],&Y[j]);
if((X[j]>0)&&(Y[j]>0))
{
Q1++;
}
if((X[j]>0)&&(Y[j]<0))
{
Q4++;
}
if((X[j]<0)&&(Y[j]>0))
{
Q2++;
}
if((X[j]<0)&&(Y[j]<0))
{
Q3++;
}
} //for loop ends
a=Q1+Q4;
b=Q1+Q2;
c=Q2+Q3;
d=Q3+Q4;
if((K>=a)||(K>=b)||(K>=c)||(K>=d))
{
out[i]=1;
}
else{
    out[i]=-1;
}
printf("\n");
}
for(int f=0;f<T;f++)
{
if(out[f]==1)
{
printf("Yes\n");
}
if(out[f]==-1)
{
printf("No\n");
}
}
return 0;
}