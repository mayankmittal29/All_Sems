#include<stdio.h>
int main()
{
int A[6]={1,2,3,4,5,6};
int B[6];
for(int i=0;i<6;i++)
{
if((A[i]%2)==0)
{
B[i]=A[i];
}
else
{
B[i]=0;
}

}
for(int k=0;k<6;k++)
{
if(B[k]!=0)
{
printf("%d\t",B[k]);
}
return 0;
}
}