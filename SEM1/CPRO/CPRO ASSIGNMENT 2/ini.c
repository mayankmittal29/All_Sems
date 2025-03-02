#include<stdio.h>
int main()
{
int arr[5][5];
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(int g=0;g<5;g++)
{
for(int o=0;o<5;o++)
{
printf("%d",arr[g][o]);
}
printf("\n");
}

}