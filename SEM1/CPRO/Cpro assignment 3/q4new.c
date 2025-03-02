#include <stdio.h>
#include <string.h>
char storage[];
static int y = 0;
long fact(int k)
{
    if (k == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
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
void store(char arr[], int h)
{
    strcpy(repeat[h], arr);
}
void swap(char arr[], int a, int b)
{
    char temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void perm(char arr[], int point)
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
            store(arr, y);
            y++;
            return;
        }
        char res[100];
        swap(arr, p, point);
        if (search(arr, res, point))
        {
            continue;
        }
        else
        {
            res[p] = arr[p];
        }
        sort(arr, point + 1);
        perm(arr, point + 1);
        swap(arr, p, point);
    }
}
int main()
{
    char arr[10];
    scanf("%s", arr);
    char *repeat[fact(strlen(arr))];
    
    perm(arr, 0);
}