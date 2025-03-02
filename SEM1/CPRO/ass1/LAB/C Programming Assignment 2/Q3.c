#include<stdio.h>
int main()
{
int n,a=0,T;
scanf("%d",&T);
int b[T];
for(int j=0;j<T;j++)
{
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n");
a=arr[0]+arr[n-1];
int max=arr[0]+arr[1];
for(int k=1;k<n;k++)
{
if((arr[k]+arr[k+1])>max)
{
max=arr[k]+arr[k+1];
}
else{
    continue;
}
}
b[j]=max;
}
printf("\n");
for(int p=0;p<T;p++)
{
if(a==b[p])
{
printf("%d\n",a);
}
else{
printf("%d\n",a>b[p]?a:b[p]);
}
}
return 0;
}