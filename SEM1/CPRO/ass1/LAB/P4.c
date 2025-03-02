#include<stdio.h>
void main()
{
int n,q,l,r;
scanf("%d",&n);
int Arr[n];
//printf("Enter the values of its elements -\n");
for(int i=0;i<n;i++)
{
scanf("%d",&Arr[i]);
}
//printf("Enter the number of your queries -");
scanf("%d",&q);
int sum;
for(int j=0;j<q;j++)
{
//printf("Enter the value of your l%d and r%d ",j,j);
scanf("%d %d",&l,&r);
sum=0;
    for(int k=l;k<=r;k++)
{
sum=sum+Arr[k];
}
printf("%d",sum);
printf("\n");
}
}