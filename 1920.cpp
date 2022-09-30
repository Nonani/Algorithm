/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-09-30 17:43:06
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-09-30 19:31:41
 * @ Problem name: 수 찾기
 * @ Solution: binary search
 * @ result: success
 */

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, B;
int A[100001];

void binary_search(int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (A[mid] == target)
        {
            printf("1\n");
            return;
        }
        else if (A[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    printf("0\n");
}
int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    sort(A, A + N);
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &B);
        binary_search(0, N - 1, B);
    }
    return 0;
}