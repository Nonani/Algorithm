/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-04 19:13:48
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-04 19:20:06
 * @ Problem name: 좌표 정렬하기
 * @ Solution: sort
 * @ result: success
 */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int N, x, y;
    vector<pair<int, int>> v;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", v[i].first, v[i].second);
    }
}