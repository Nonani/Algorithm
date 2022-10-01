/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-01 15:06:57
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-01 17:08:47
 * @ Problem name: 수 정렬하기 2
 * @ Solution: sort using memorizing
 * @ result: success
 */

#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1000001], N;
int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
        printf("%d\n", arr[i]);
}