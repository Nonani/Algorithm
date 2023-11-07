/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-09-29 08:48:16
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-09-29 22:34:18
 * @ Problem name: 랜선 자르기
 * @ Solution: 완전 탐색
 * @ result: 시간초과
 */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int K, N, n, sum, cnt;
    // K, N 문제의 조건과 동일, n
    vector<int> v;
    sum = cnt = 0;
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
        sum += num / N;
    }

    while (cnt != N)
    {
        for (int i = 0; i < K; i++)
        {
            cnt += v[i] / sum;
        }
        if (cnt >= N)
            break;
        else
        {
            cnt = 0;
            sum--;
        }
    }
    cout << sum << endl;
}