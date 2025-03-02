#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A, N;
        scanf("%d %d", &A, &N);
        int C[N];
        int count[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &C[j]);
        }
        for (int p = N - 1; p >= 0; p--)
        {
            if (C[p] <= A)
            {
                while (1)
                {
                    int s = 1;
                    if (C[p] * s >= A)
                    {
                        break;
                    }
                    s++;
                }
            }
        }
    }
    return 0;
}