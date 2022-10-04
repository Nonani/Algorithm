/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-04 19:24:36
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-04 20:37:35
 * @ Problem name: 요세푸스 문제 0
 * @ Solution: circular queue
 * @ result:
 */
#include <stdio.h>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int N, K, cnt, index;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
        q.push(i);

    index = -1;
    printf("<");
    while (!q.empty())
    {

        index++;
        int num = q.front();
        if ((index + 1) % K == 0)
        {
            switch (q.size())
            {
            case 1:
                printf("%d>\n", num);
                break;
            default:
                printf("%d, ", num);
            }
        }

        else
            q.push(num);
        q.pop();
    }
    return 0;
}
// 1 4 5 7