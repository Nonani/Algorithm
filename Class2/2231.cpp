/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-04 22:37:40
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-04 22:48:13
 * @ Problem name: 분해합
 * @ Solution: 완전 탐색
 * @ result:
 */
#include <stdio.h>
using namespace std;
int cache[1000001];
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 1000000; i++)
    {
        int sum = i;
        int num = i;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == N)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
}