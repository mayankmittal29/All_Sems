#include <stdio.h>
int max(long a)
{
    long x = a;
    int b;
    int maxnum = 0;
    while (x > 0)
    {
        b = x % 10;
        if (b > maxnum)
        {
            maxnum = b;
        }
        x = x / 10;
    }
    return maxnum;
}
int main()
{
    long N;
    int count = 0;
    scanf("%ld", &N);
    while (N >= 0)
    {
        N = N - max(N);
        count++;
        if (N == 0)
        {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}