#include <stdio.h>
int main()
{
    int n, a = 0, T;
    scanf("%d", &T);
    for (int j = 0; j < T; j++)
    {
        scanf("%d", &n);
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%ld", &arr[i]);
        } // array initialised
        a = arr[0] + arr[n - 1];
        int m = arr[0] + arr[1];
        for (int k = 1; k < n - 1; k++)
        {
            if ((arr[k] + arr[k + 1]) > m)
            {
                m = arr[k] + arr[k + 1];
            }
        }
        if (m >= a)
        {
            printf("%d\n", m);
        }
        else
        {
            printf("%d\n", a);
        }
    }
    return 0;
}