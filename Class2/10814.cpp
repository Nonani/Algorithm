/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-03 14:29:25
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-03 14:56:38
 * @ Problem name: 나이순 정렬
 * @ Solution: stable sort
 * @ result: success
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 
bool compare(pair<int, char *> a, pair<int, char *> b)
{

    return a.first < b.first;
}
int main()
{
    int N;
    vector<pair<int, char *>> v;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int age;
        char *name = new char[100];
        scanf("%d %s", &age, name);
        v.push_back(make_pair(age, name));
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++)
    {
        printf("%d %s\n", v[i].first, v[i].second);
    }
    return 0;
}
