#include <stdio.h>
int main()
{
    int T;
    int ans;
    scanf("%d", &T);
    int N, M;
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);
        int A[N];
        int C[M];
        for (int g = 0; g < M; g++)
        {
            C[g] = 0;
        }
        int max = 0;
        for (int p = 0; p < N; p++)
        {
            scanf("%d", &A[p]);
            C[A[p] - 1]++;
            if (C[A[p] - 1] > max)
            {
                max = C[A[p] - 1];
                ans = A[p];
            }
            else if (C[A[p] - 1] == max)
            {
                ans = -1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}