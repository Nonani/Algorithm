/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-05 17:52:27
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-07 14:27:57
 * @ Problem name: Hashing
 * @ Solution: -
 * @ result: success
 */
// 1.(a + b) mod n = {(a mod n) + (b mod n)} mod n
// 2.(a - b) mod n = {(a mod n) - (b mod n)} mod n
// 3.(a * b) mod n = {(a mod n) * (b mod n)} mod n

#include <stdio.h>
#include <cmath>
#define R 31
#define M 1234567891
using namespace std;
int main()
{
    unsigned long long int H, r = 1;
    int N;
    char str[51];
    scanf("%d", &N);
    scanf("%s", str);
    H = 0;
    for (int i = 0; i < N; i++)
    {
        H = (H + (str[i] - 'a' + 1) * r) % M;
        r = (r * R) % M;
    }
    printf("%llu\n", H % M);
}
