#include<stdio.h>
void main()

{
int a=1;
int r;
printf("Enter the number of rows -");
scanf("%d",&r);
for(int i=0;i<r;i++)
{
 for(int j=r;j>=i;j--)
 { 
   printf(" ");
 }
for(int k=0;k<=i;k++)
 {
   printf(" %d",a);
   a++;
 }
printf("\n");
}
}