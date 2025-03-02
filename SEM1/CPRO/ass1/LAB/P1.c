#include<stdio.h>
void main(void)
{
int n,i=0,j=1,k;
printf("Enter the value of n :");
scanf("%d",&n);
int arr[n];
arr[0]=0;
arr[1]=1;
k=i+j;
for(int p=2;p<n;p++)
{
arr[p]=k;
i=j;
j=k;
k=i+j;
}
printf("Elements in array is- ");
for(int o=0;o<n;o++)
{
printf("\t%d\t",arr[o]);
}
printf("\n");

}