/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-11-08 00:39:02
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-11-08 00:53:30
 * @ Problem name: 구간 합 구하기 4
 * @ Solution: dp
 * @ result: success
 */

#include <stdio.h>
int dp[1000001];
int main()
{
    int M, N;

    scanf("%d %d", &M, &N);
    for (int i = 1; i <= M; i++)
    {
        int num;
        scanf("%d", &num);
        dp[i] = dp[i - 1] + num;
    }
    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", dp[b] - dp[a - 1]);
    }
}
