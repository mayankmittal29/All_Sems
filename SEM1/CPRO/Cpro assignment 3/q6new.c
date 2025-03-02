
#include <stdio.h>
void comb(long arr[], int store[], int start, int end,int index, int K)
{
	if (index == K)
	{
		for (int j=0; j<K; j++)
		printf("%d ", store[j]);
		printf("\n");
		return;
	}
	for (int i=start; i<=end && end-i+1 >= K-index; i++)
	{
		store[index] = arr[i];
		comb(arr, store, i+1, end, index+1, K);
	}
}
int main()
{
	int N, K;
    scanf("%d %d", &N, &K);
    long arr[N];
	int store[K];
    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &arr[i]);
    }
	comb(arr,store,0,N-1,0,K);
}
