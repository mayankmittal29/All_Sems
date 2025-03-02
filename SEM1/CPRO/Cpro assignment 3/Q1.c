#include<stdio.h>
int max(int a[])
{
int max=a[0];
for(int i=1;i<=6;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
return max;
}
int main()
{
long N;
int b;
int arr[7]={0};
scanf("%ld",&N);
int count =0;
int k=0;
while(N>0)
{
b=N%10;
arr[k]=b;
N=N/10;
k++;
}
int c=max(arr);




return 0;
}