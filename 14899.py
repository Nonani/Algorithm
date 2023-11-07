def getSum(l, S):
    sum = 0
    for i in l:
        for j in l:
            sum += S[i][j]
    return sum
def DFS(N, l1, l2, i):
    if len(l1) == N // 2 and len(l2) == N // 2:
       global ans
       ans = min(ans,abs(getSum(l1, S) - getSum(l2, S)))
       return
    if len(l1) > N // 2 or len(l2) > N // 2:
        return
    DFS(N, l1 + [i], l2, i + 1)
    DFS(N, l1, l2 + [i], i + 1)
N = int(input())
S = [list(map(int, input().split())) for _ in range(N)]
ans = 1000000000
DFS(N, [], [], 0)
print(ans)
