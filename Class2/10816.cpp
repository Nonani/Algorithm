/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-04 18:31:38
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-04 19:11:32
 * @ Problem name: 숫자 카드 2
 * @ Solution: unordered_map
 * @ result: success
 */

#include <iostream>
#include <stdio.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> m;
    int N, M;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        m[num]++;
    }
    scanf("%d", &M);
    for (int i = 0; i < M - 1; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d ", m[num]);
    }
    int num;
    scanf("%d", &num);
    printf("%d\n", m[num]);
}