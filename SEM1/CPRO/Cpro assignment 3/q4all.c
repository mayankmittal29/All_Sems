#include <stdio.h>
#include <string.h>
char *storage[];
 static int y = 0;
int check(char arr[])
{
    char temp = arr[0];
    for (int y = 1; y < strlen(arr); y++)
    {
        if (temp != arr[y])
        {
            return 0;
        }
    }
    return 1;
}
void sortb(char T[])
{
    for (int i = 0; i < strlen(T) - 1; i++)
    {
        for (int j = 0; j < strlen(T) - 1 - i; j++)
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
long fact(int k)
{
    if (k == 1)
    {
        return 1;
    }
    else
    {
        return k * fact(k - 1);
    }
}
int search(char arr[], char d[], int s)
{
    for (int i = 0; i < strlen(d); i++)
    {
        if (arr[s] == d[i])
        {
            return 1;
        }
    }
    return 0;
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
void store(char arr[],int y)
{
    // strcpy(repeat[h], arr);
    strcpy(storage[y],arr);
}
void swap(char arr[], int a, int b)
{
    char temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void perm(char arr[], int point) // (point) -level of tree
{
    if (strlen(arr) == 1)
    {
        printf("%s\n", arr);
        return;
    }
    if (check(arr))
    {
        printf("%s\n", arr);
        return;
    }
    for (int p = point; p < strlen(arr); p++) // p=0 to 2
    {
        if (point == strlen(arr) - 1)
        {
            store(arr,y);
            y++;
            return;
        }
        char res[100];
        swap(arr, p, point);
        // if (search(arr, res, point))
        //{
        //    continue;
        //}
        // else
        //{
        // res[p] = arr[p];// res[0]=a
        //}
        sort(arr, point + 1);
        perm(arr, point + 1);
        swap(arr, p, point);
    }
}
int main()
{
    char arr[10];
    scanf("%s", arr);
    char *storage[fact(8)+10][10];
    // char *repeat[fact(strlen(arr))];
    
    sortb(arr);
    perm(arr, 0);
    
}