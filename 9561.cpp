/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-11-08 00:27:56
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-11-08 00:38:41
 * @ Problem name: 파도반 수열
 * @ Solution: dp
 * @ result: success
 */

#include <iostream>
using namespace std;

int main()
{
    int T;
    unsigned long long int dp[101] = {
        0,
        1,
        1,
        1,
        2,
        2,
        3,
        4,
        5,
        7,
        9,
    };
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        for (int i = 11; i <= N; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 5];
        }
        cout << dp[N] << "\n";
    }
}