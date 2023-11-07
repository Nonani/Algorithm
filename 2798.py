'''
 # @ Author: Jinwoo Choi
 # @ Create Time: 2022-10-01 17:10:19
 # @ Modified by: Jinwoo Choi
 # @ Modified time: 2022-10-01 17:10:21
 # @ Problem name: 블랙잭
 # @ Solution: 완전 탐색
 # @ result: success
 '''
N, M = map(int, input().split(" "))
l = list(map(int, input().split(" ")))
ans = 0

for i in range(0, N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            sum = l[i] + l[j] + l[k]
            if sum > M:
                continue
            else:
                ans = max(ans, sum)

print(ans)
