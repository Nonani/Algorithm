/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-05 10:46:42
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-05 11:05:21
 * @ Problem name: 수 정렬하기 3
 * @ Solution: counting sort
 * @ result: success
 */

#include <stdio.h>
using namespace std;
int count[10001] = {
    0,
};
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 1; i <= 10000; i++)
    {
        while (count[i]--)
            printf("%d\n", i);
    }
}