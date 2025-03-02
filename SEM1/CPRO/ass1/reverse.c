#include<stdio.h>
int main()
{
int num,a;
printf("Enter your number to be reversed : ");
scanf("%d",&num);
while(num>0)
{
a=num%10;
printf("%d",a);
num=num/10;
}
printf("\n");
}