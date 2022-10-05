/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-05 18:40:25
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-05 19:05:15
 * @ Problem name: 좌표 정렬하기 2
 * @ Solution: sort
 * @ result: success
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    vector<pair<int, int>> v;
    vector<pair<int, int>>::iterator it;
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), compare);
    for (it = v.begin(); it < v.end(); it++)
        printf("%d %d\n", it->first, it->second);
}
