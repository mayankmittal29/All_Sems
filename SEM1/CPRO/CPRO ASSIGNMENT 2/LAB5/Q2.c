#include<stdio.h>
int seq(int a)
{
if(a==1)
{
printf("1 ");
}
else{
seq(a-1);
printf("%d ",a);
seq(a-1);
}
}
int main()
{
int N;
scanf("%d",&N);
seq(N);
return 0;
}