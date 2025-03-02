#include<stdio.h>
int main()
{
int T,M,C,O;
scanf("%d",&T);
int arr[T];
for(int i=0;i<T;i++)
{
scanf("%d %d %d",&M,&C,&O);
if(M<C){
    if(2*M<=O)
{
arr[i]=M;
}
else
{
arr[i]=M-1;
}
}
else{
if(2*C<=O)
{
arr[i]=C;
}
else
{
arr[i]=C-1;
}
}
}
for(int j=0;j<T;j++)
{
printf("%d\n",arr[j]);
}
return 0;
}