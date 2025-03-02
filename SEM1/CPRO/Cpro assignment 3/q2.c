#include <stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    long weight[N];
    long min[N-1];
    int issorted=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &weight[i]);
    }
    for (int x = 0; x < N - 1; x++)
    {
        issorted=1;
        for (int y = 0; y < N - x - 1; y++)
        {
            if (weight[y] > weight[y + 1])
            {
                int temp = weight[y];
                weight[y] = weight[y + 1];
                weight[y + 1] = temp;
                issorted=0;
            }
        }
        if(issorted==1) // to make sorting adaptive
        {
        break;
        }
    }
    long sum1=weight[N-1];
    long sum2=0;
    for(int p=0;p<N-1;p++)
    {
    for(int q=p;q<N-1;q++)
    sum2=sum2+weight[q];
    if(q>0)
    {
    sum1=sum1+weight[q-1]
    }
    return 0;
}