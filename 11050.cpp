/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-03 14:57:03
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-03 15:05:49
 * @ Problem name: 이항 계수 1
 * @ Solution: DP
 * @ result: success
 */
#include <stdio.h>
int main()
{
    unsigned int f[11] = {
        1,
    };
    int N, K, answer;

    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        f[i] = f[i - 1] * i;
    }

    answer = f[N] / (f[N - K] * f[K]);
    printf("%d\n", answer);
    return 0;
}
