#include <stdio.h>
int main()
{
    int t, a, n, c, p, q, r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &n, &c);
        for (int j = 1; j <= n; j++)
        {
            p = a / n;
            q = a % n;
            r = (q * 10)/n;

            

            if (r == c)
            {
                printf("%d\n", j);
                
                break;
            }
            a=q*10;
            }
            
            if(r!=c)
            {
            printf("-1\n");
            }
    }
    return 0;
        }
    
    
