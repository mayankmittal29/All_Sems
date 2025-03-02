#include <stdio.h>
#include <string.h>
long fact(long n);
long totalperm(char arr[])
{
    long frequency[26] = {0};
    for (long i = 0; i < strlen(arr); i++)
    {
        frequency[arr[i] - 'a']++;
    }
    long result = fact(strlen(arr));
    for (long i = 0; i < 26; i++)
    {
        if (frequency[i] > 1)
            result /= fact(frequency[i]);
    }
    return result;
}
long duplicate(char arr[], long i, long p)
{
    for (long x = i; x < p; x++)
    {
        if (arr[x] == arr[p])
        {
            return 0;
        }
    }
    return 1;
}
long fact(long n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
long check(char arr[])
{
    char temp = arr[0];
    for (long y = 1; y < strlen(arr); y++)
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
    for (long i = 0; i < strlen(T) - 1; i++)
    {
        for (long j = 0; j < strlen(T) - 1 - i; j++)
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
void sort(char T[], long y)
{
    for (long i = 0; i < strlen(T) - 2; i++)
    {
        for (long j = y; j < strlen(T) - 1 - i; j++)
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
void printperm(char arr[])
{
    printf("%s\n", arr);
}
void swap(char arr[], long a, long b)
{
    char temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void perm(char arr[], long point)
{
    if (strlen(arr) == 1)
    {
        printf("%s\n", arr);
        return;
    }
    else if (check(arr))
    {
        printf("%s\n", arr);
        return;
    } else {
        for (long p = point; p < strlen(arr); p++)
        {
            if (point == strlen(arr) - 1)
            {
                printperm(arr);

                return;
            }
            long con = duplicate(arr, point, p);
            if (con)
            {
                swap(arr, p, point);
                sort(arr, point + 1);
                perm(arr, point + 1);
                swap(arr, p, point);
            }
        }
    }
}

int main()
{
    char arr[10];
    scanf("%s", arr);
    sortb(arr);
    printf("%ld\n", totalperm(arr));
    perm(arr, 0);
}