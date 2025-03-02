#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n -");
scanf("%d",&n);
int Arr1[n];
printf("Enter the values of its elements -\n");
for(int i=0;i<n;i++)
{
scanf("%d",&Arr1[i]);
}
int Arr2[n];
Arr2[0]=Arr1[0];
printf("%d\t",Arr2[0]);
for(int j=1;j<n;j++)
{
Arr2[j]=Arr2[j-1]+Arr1[j];
printf("\t%d\t",Arr2[j]);
}
printf("\n");
}