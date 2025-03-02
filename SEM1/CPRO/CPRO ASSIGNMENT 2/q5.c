#include <stdio.h>
int main()
{
  int T, N, M, index, max, count, countmax, t;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    scanf("%d %d", &N, &M);
    int a[N];
    int c[M];

    for (int j = 0; j < N; j++)
    {
      scanf("%d", &a[j]);
    }
    max = 0;
    countmax = 0;
    t = 0;
    for (int x = 0; x < N-1; x++)
    {
      count = 1;
      for (int y =x+1; y < N; y++)
      {
        if ((a[x] == a[y])&&(c[a[x]-1]))
        {
          count++;
          c[y]=-1;
        }
      }
      if (count == 1)
      {
        c[a[x] - 1] = -1;
      }
      else
      {
        c[a[x] - 1] = count;
      }
      if (c[x] > max)
        &&(x <= M)
        {
          max = c[x];
        }
    }
    // We have calculated the frequency of all elements in c array.
    // found the max frequency element
    for (int q = 0; q < M; q++)
    {
      if (c[q] == max)
      {
        countmax++;
        t = q;
      }
    }
    if (countmax > 1)
    {
      printf("%d\n", -1);
    }
    else
    {
      printf("%d\n", a[t]);
    }
  }
  return 0;
}