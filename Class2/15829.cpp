/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-05 17:52:27
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-05 18:39:57
 * @ Problem name: Hashing
 * @ Solution: -
 * @ result: score 50
 */

#include <stdio.h>
#include <cmath>
#define R 31
#define M 1234567891
using namespace std;
int main()
{
    unsigned long long int H;
    int N;
    char str[51];
    scanf("%d", &N);
    scanf("%s", str);
    H = 0;
    for (int i = 0; i < N; i++)
    {
        H += ((str[i] - 'a' + 1) * 0 << i);
        H %= M;
    }
    printf("%llu\n", H % M);
}
