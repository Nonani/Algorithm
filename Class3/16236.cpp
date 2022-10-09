/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-09 14:52:38
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-09 17:06:25
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
int visit[MAP_SIZE][MAP_SIZE];

void fill_visit()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            visit[i][j] = 0;
}
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
    q.push(make_pair(X, Y));
}

int bfs(int cnt, int cur_size, int x, int y, queue<pair<int, int>> q)
{
    pair<int, int> p = q.front();
    q.pop();
    if (map[p.second][p.first] == 0 || map[p.second][p.first] == cur_size)
    {
        int cost = 10000000;
        for (int i = 0; i < 4; i++)
        {
            int next_x = p.first + dx[i];
            int next_y = p.second + dy[i];

            if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N && map[next_y][next_x] <= cur_size)
            {
                q.push(make_pair(next_x, next_y));
                int tmp = bfs(cnt + 1, cur_size, next_x, next_y, q);
                cost = (cost > tmp) ? tmp : cost;
            }
        }
    }
    else if (map[p.second][p.first] < cur_size)
    {
        map[p.second][p.first] = 0;
        return cnt + 1;
    }

    return cost;
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
    int answer = 0;
    int cur_size = 1;
    while (X != -1 && Y != -1)
    {
        queue<pair<int, int>> q;
        q.push(make_pair(X, Y));
        answer += bfs(0, ++cur_size, X, Y, q);
    }
}
int main()
{
    init();
    solve();
}