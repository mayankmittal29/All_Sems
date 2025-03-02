#include <stdio.h>
void rec(int K,int k,int N,long arr[])
{   if(k<0)
{
return;
}
    else
{
    rec(K,k-1,N,arr);
    for (int j = k + 1; j < N; j++)
    {
        printf("%ld %ld\n", arr[k], arr[j]);
    
    }

}
return;
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
    rec(arr,N,K);
    
    return 0;
}