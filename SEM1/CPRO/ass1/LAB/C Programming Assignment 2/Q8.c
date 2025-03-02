#include<stdio.h>
#include<math.h>
int main()
{
int T,A,N,C,b,d;
double div,a;
scanf("%d",&T);
int arr[T];
for(int i=0;i<T;i++)
{
scanf("%d %d %d",&A,&N,&C);
div=A/N;
b=A/N;
a=div-b;
for(int j=0;j<pow(10,100);j++)
{
a=a*10;
d=(int)a;
if(d==C)
{
arr[i]=j+1;
break;
}
a=a-d;
}
}
for(int h=0;h<T;h++)
{
printf("%d\n",arr[h]);
}
return 0;
}