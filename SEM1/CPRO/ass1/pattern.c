#include<stdio.h>
int main()
{
int a;
for(int i=1;i<=7;i++)
{
for(int j=7;j>=i;j--)
{
printf("*");
}
printf("\n");
}
return 0;
}