#include<stdio.h>
#include<math.h>
int main()
{
long a;
int flag=1;
scanf("%ld",&a);
if((a==1)||(a==0))
{
flag=0;
}
for(int i=2;i<=sqrt(a);i++)
{
if((a%i)==0)
{
flag=0;
break;
}
}
if(flag==1)
{
printf("Prime");
}
else{
printf("Composite");
}
return 0;
}