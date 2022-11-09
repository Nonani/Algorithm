/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-11-09 17:36:56
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-11-09 18:47:50
 * @ Problem name: 숨바꼭질
 * @ Solution: bfs
 * @ result: success!
 */

#include <stdio.h>
#include <queue>
#define MAX 1000001

using namespace std;

int N, K;
int X[MAX];
queue<pair<int, int>> q; // first: 현재 좌표, second: cost
int main()
{

    for (int i = 0; i < MAX; i++)
        X[i] = -1;
    scanf("%d %d", &N, &K);
    q.push(make_pair(N, 0));
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first < 0 || p.first > MAX)
            continue;
        else if (p.first == K)
        {
            printf("%d\n", p.second);
            break;
        }

        else if (X[p.first] == -1)
        {
            X[p.first] = p.second;
            q.push(make_pair(p.first - 1, p.second + 1));
            q.push(make_pair(p.first + 1, p.second + 1));
            q.push(make_pair(p.first * 2, p.second + 1));
        }
    }

    return 0;
}
