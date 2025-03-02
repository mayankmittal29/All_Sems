#include <stdio.h>
#include <stdlib.h>
char arr[8][8];
int k = 0;
int count = 0;
int col[8];
int conflict(int a,int b);
void plac(int x)
{
    int k = x;                   // k represents row
    for (int i = 1; i <= 8; i++) // i represents columns
    {
        if ((conflict(k, i)) && (arr[k-1][i-1] != '*'))
        {
            col[k - 1] = i;
            if (k == 8)
            {
                count++;
                return;
            }
            else
            {
                plac(k + 1);
            }
        }
    }
}
int conflict(int a, int b)
{
    for (int j = 0; j < a - 1; j++)
    {
        if (col[j] == b) // for column conflict
        {
            return 0;
        }
        if (abs((j+1) - a) == abs(col[j] - b)) // for diagonal conflict
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf("%c", &arr[i][j]);
        }
        scanf("\n");
    }
    plac(1);
    printf("%d\n", count);
    return 0;
}
