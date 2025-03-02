#include<stdio.h>
int fun(int t)
{
return (t*t)+t*2+3;
}
int main()
{
int a;
long b;
scanf("%d",&a);
b=fun(fun(fun(a))+fun(fun(a)+a));
printf("%ld\n",b);
return 0;
}