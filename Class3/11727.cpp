/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-11-08 00:09:56
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-11-08 00:27:26
 * @ Problem name: 2×n 타일링 2
 * @ Solution: dp
 * @ result: success!
 */

#include <stdio.h>
int dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    dp[1] = 1;
    dp[2] = 3;
    // dp[n] = dp[n-1] + dp[n-2]
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
    }

    printf("%d\n", dp[n]);
}