#include<stdio.h>
#include<string.h>
void comb(char T[],int len,int index)
{
if(len==0)



}
void main()
{
char T[100]; 
char a;
char D[100];
scanf("%s",T);
for(int i=0;i<strlen(T)-1;i++)
{
    for(int j=0;j<strlen(T)-1-i;j++)
    {
    if(T[j]>T[j+1])
    {
    a=T[j];
    T[j]=T[j+1];
    T[j+1]=a;
    }
    }
}
//Bubble sort done on string
comb(T,D,0);


}