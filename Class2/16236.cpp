/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-09 14:52:38
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-09 16:12:29
 * @ Problem name: 아기 상어
 * @ Solution:
 * @ result:
 */
#define MAP_SIZE 20
#include <stdio.h>
#include <queue>
using namespace std;
int N, X, Y;
const int dx[4] = {0, -1, 1, 0};
const int dy[4] = {1, 0, 0, -1};
int map[MAP_SIZE][MAP_SIZE];
queue<pair<int, int>> q;
void init()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &map[i][j]);
            if (map[i][j] == 9)
            {
                Y = i;
                X = j;
            }
        }
    }
    q.push(make_pair(x, y));
}
int next(int cnt, int cur_size, int x, int y)
{
}
void solve()
{
    /*
        solve logic
        if(먹을수 있는 것이 있는가)
            then if(아기상어가 갈 수 있는 곳인가)
                가서 먹는다
                이동거리를 더한다
                상어 크기를 1 늘린다
    */
    bfs(0, 2, X, Y);
}
int main()
{
    init();
    solve();
}