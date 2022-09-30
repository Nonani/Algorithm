/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-09-30 21:13:11
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-09-30 21:29:02
 * @ Problem name: 카드2
 * @ Solution: queue
 * @ result: success
 */

#include <stdio.h>
#include <queue>
using namespace std;
int main()
{
    int N, i;
    queue<int> q;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        q.push(i);

    i = 0;
    while (!q.empty())
    {
        N = q.front();
        q.pop();
        if (i % 2 != 0)
            q.push(N);
        i++;
    }
    printf("%d\n", N);
}