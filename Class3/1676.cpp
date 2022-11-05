/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-11-05 21:28:41
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-11-05 21:47:33
 * @ Problem name: 팩토리얼 0의 개수
 * @ Solution: math
 * @ result: success
 */
#include <stdio.h>
using namespace std;
int count_x(int n, int x)
{
    int num = n;
    int cnt = 0;
    while (num % x == 0)
    {
        cnt++;
        num /= x;
    }
    return cnt;
}

int main()
{
    int N;
    scanf("%d", &N);
    int one = 0, five = 0;
    for (int i = 1; i <= N; i++)
    {
        one += count_x(i, 2);
        five += count_x(i, 5);
    }
    printf("%d\n", (one > five) ? five : one);
}
