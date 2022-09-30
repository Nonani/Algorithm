/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-09-30 19:31:07
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-09-30 21:04:19
 * @ Problem name: 소수 구하기
 * @ Solution: -
 * @ result: success
 */

#include <iostream>
using namespace std;
bool is_prime(int n)
{
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N, i;
    cin >> M >> N;
    if (M == 1)
        M++;
    for (int i = M; i <= N; i++)
    {
        if (is_prime(i))
            cout << i << "\n";
    }
    return 0;
}