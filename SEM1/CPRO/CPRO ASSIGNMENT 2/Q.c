#include <stdio.h>
#include<stdlib.h>
int main()
{
    int T, N, M, R, C;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &N, &M, &R, &C);
        int arr[N][M];
        int mdistance=0;
        int min=1000;
        int count =0;
        int l1=0;
        int l2=0;
        for (int j = 1; j <=N; j++)
        {
    
            for (int k = 1; k <=M; k++)
            {
    
            scanf("%d",&arr[j-1][k-1]);
            if(arr[j-1][k-1]==1)
            {
            mdistance=abs(j-R)+abs(k-C);
            count++;
            if(mdistance<min)
            {
            min=mdistance;
            l1=j;
            l2=k;
            }
            // if(mdistance==min)
            // {
            // if((j<l1)||((j==l1)&&(k<l2)))
            // {
            // l1=j;
            // l2=k;
            // }
            // }
            }
        }
        }
        if(count>0)
        {
        printf("%d %d \n",l1,l2);
       }
       else if(count==0){
        printf("%d\n",-1);
       }
    }
    return 0;
}