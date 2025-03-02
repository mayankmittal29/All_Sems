#include <stdio.h>
int main()
{
    int T, N, K;
    scanf("%d", &T);
    int a, b, c, d; // a and b for x and c and d for y
    for (int i = 0; i < T; i++)
    {
    
        scanf("%d %d", &N, &K);
        long X[N];
        long Y[N];
        // initialisation
        a=0;
         b=0;
          c=0;
           d = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%ld %ld", &X[j], &Y[j]);
            if (X[j] > 0)
            {
                a++;
            }
            if (X[j] < 0)
            {
                b++;
            }
            if (Y[j] > 0)
            {
                c++;
            }
            if (Y[j] < 0)
            {
                d++;
            }
        }
        // if((a<=b)&&(a<=c)&&(a<=d))
        // {
        // min=a;
        // }
        // if((b<=a)&&(b<=c)&&(b<=d))
        // {
        // min=b;
        // }
        // if((c<=b)&&(c<=a)&&(c<=d))
        // {
        // min=c;
        // }
        // if((d<=b)&&(d<=c)&&(d<=a))
        // {
        // min=d;
        // }
        // int arr[4]={a,b,c,d};
        // int min=arr[0];
        if ((a<=K) || (b<=K) || (c<=K) || (d<=K))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
