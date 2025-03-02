#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long int min;
long long int sumt;
void calculatemin(long long int p[], long long arrsize)
{

    long long int powsetsize = pow(2, arrsize);
    long long x, j;
    for (x = 1; x < powsetsize; x++)
    {
        long long int s1 = 0;
        for (j = 0; j < arrsize; j++)
        {
            long long int m = pow(2, j);
            if ((m & x) == m)
            {
                s1 = s1 + p[arrsize - j - 1];
            }
        }
        long long int s2 = sumt - s1;
        long long int r = llabs(s1 - s2);
        if (min >= r)
        {
            min = r;
        }
    }
}
int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    for (long long  i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        sumt = sumt + A[i];
    }
    min = sumt;
    calculatemin(A, N);
    printf("%lld\n", min);
    return 0;
}