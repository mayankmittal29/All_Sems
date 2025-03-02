#include <stdio.h>
void fun2(long arr[],int N,int K,int a,int B[],int b);
void fun1(long arr[], int N, int K)
{
    int B[K];
    fun2(arr, N, K, 0, B, 0);
}
void fun2(long arr[], int N, int K, int a ,int B[], int b)
{

   
    if (a == K)
    {
        for (int j = 0; j < K; j++)
        {
            printf("%d", B[j]);
        }
        printf("\n");
        return;
    }
    if (b >= N)
        return;
    B[a] = arr[b];
    fun2(arr, N, K, a + 1, B, b + 1);
    fun2(arr, N, K, a, B, b + 1);
}
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    long arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &arr[i]);
    }
    fun1(arr, N, K);
    return 0;
}