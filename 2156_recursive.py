import sys

# DFS(n, cur, cnt, ans)
# n: 포도주 잔의 개수
# cur: 현재 잔의 번호
# cnt: 연속으로 마신 잔의 개수
# ans: 현재까지 마신 포도주의 양
# 1. 현재 잔을 마시는 경우
# 2. 현재 잔을 마시지 않는 경우


def DFS(n, cur, cnt, ans):
    global l, answer
    if cur == n:
        answer = max(answer, ans)
        return
    if cnt != 2:
        DFS(n, cur + 1, cnt + 1, ans + l[cur])
    DFS(n, cur + 1, 0, ans)


    
input = sys.stdin.readline
n = int(input())
l = []
answer = 0
for _ in range(n):
    l.append(int(input()))
DFS(n, 0, 0, 0)
print(answer)

