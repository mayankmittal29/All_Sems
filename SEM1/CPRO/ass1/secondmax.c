#include<stdio.h>
int main()
{
int num,max=0,secondmax=0;
for(int i=0;i<=5;i++)
{
scanf("%d",&num);
if(num>max)
{
secondmax=max;
max=num;
}
else if((num>secondmax)&&(num<max))
{
secondmax=num;
}

}
printf("Largest Number among all is : %d\n",max);
printf("Second Largest Number among all is :%d",secondmax);
printf("\n");
}
