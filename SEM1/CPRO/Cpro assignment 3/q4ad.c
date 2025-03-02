#include <stdio.h>
#include <string.h>
char arr[10];
char memory[][];
long fact(int n)
{
if((n==0)||(n==1))
{
return 1;
}
else
{
return n*fact(n-1);
}
}
void sort(char T[], int y)
{
    for (int i = 0; i < strlen(T) - 2; i++)
    {
        for (int j = y; j < strlen(T) - 1 - i; j++)
        {
            if (T[j] > T[j + 1])
            {
                char a = T[j];
                T[j] = T[j + 1];
                T[j + 1] = a;
            }
        }
    }
}
void store(char arr[],char **memory,int *u)
{
        for(int x=0;x<strlen(arr);x++)
        {
        memory[(*u)++][x]=arr[x];
       // printf("%c", arr[j]);
    }
    //printf("\n");
}
void swap(char arr[], int a, int b)
{
    char temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void perm(char arr[], int point,char **memory,int *u)
{
    if (strlen(arr) == 1)
    {
        printf("%s\n", arr);
        return;
    }
    for (int p = point; p < strlen(arr); p++)
    {
        if (point == strlen(arr) - 1)
        {
            store(arr,memory,u);
            return;
        }
        swap(arr, p, point);
        sort(arr, point + 1);
        perm(arr, point + 1,memory,u);
        swap(arr, p, point);
    }
}
int main()
{
    int h=0;
    int *u=&h;
    scanf("%s",arr);
    char memory[fact(strlen(arr))][strlen(arr)];
    perm(arr, 0,memory,u);
    
}