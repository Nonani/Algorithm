/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-09-29 08:48:16
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-09-30 17:43:42
 * @ Problem name: 랜선 자르기
 * @ Solution: 완전 탐색
 * @ result: success
 */
#include <iostream>
using namespace std;

int main()
{
    int K, N, ans;
    int arr[10001];
    int max = 0;
    long long int mid, end, start;

    cin >> K >> N;

    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    start = 1;
    end = max;
    ans = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;
        int cnt = 0;
        for (int i = 0; i < K; i++)
            cnt += arr[i] / mid;

        if (cnt >= N)
        {
            start = mid + 1;
            if (ans < mid)
                ans = mid;
        }
        else
        { // (cnt < N)
            end = mid - 1;
        }
    }

    cout << ans << endl;
}