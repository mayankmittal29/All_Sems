#include<stdio.h>
int main()
{
int T,X,Y;
scanf("%d",&T);
int arr[T];
for(int i=0;i<T;i++)
{
scanf("%d %d",&X,&Y);
arr[i]=5*X+3*Y;
}
for(int j=0;j<T;j++)
{
printf("%d\n",arr[j]);
}
return 0;
}