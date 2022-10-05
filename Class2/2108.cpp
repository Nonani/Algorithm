/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-05 09:53:59
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-05 10:47:01
 * @ Problem name: 통계학
 * @ Solution: -
 * @ result: success
 */

#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
bool compare1(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

bool compare2(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}
int main()
{
    int N, sum, mid, max, min;
    double avg;
    unordered_map<int, int> m;
    unordered_map<int, int>::iterator it;
    vector<int> a;
    ;
    sum = 0;
    max = -4001;
    min = 4001;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
        m[num]++;
        a.push_back(num);
        if (max < num)
            max = num;
        if (min > num)
            min = num;
    }
    avg = (double)sum / N;
    vector<pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare1);
    sort(a.begin(), a.end());
    if (avg < 0.5 && avg > -0.5)
        printf("0\n");
    else
        printf("%.0lf\n", avg);
    printf("%d\n", a[N / 2]);
    sort(v.begin(), v.end(), compare2);
    printf("%d\n", (v[0].second == v[1].second) ? v[1].first : v[0].first);
    printf("%d\n", max - min);
}