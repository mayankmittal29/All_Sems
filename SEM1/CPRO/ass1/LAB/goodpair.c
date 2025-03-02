#include<stdio.h>
int main()
{
int n,b;
printf("Enter the value of n ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d ",&arr[i]);
}
for(int j=0;j<n;j++)
{
    b=0;
for(int k=j+1;k<n;k++)
{
if(((arr[j]+arr[k])%2)==0)
{
b=arr[j+1];
arr[j+1]=arr[k];
arr[k]=b;
}
}
}
printf("\n");
for(int g=0;g<n;g++)
{
printf("%d ",arr[g]);
}
return 0;
}
//logic- Rearrange all elements of arr in pair of two i.e odd and even