import sys
input = sys.stdin.readline
MAX = 501
N = int(input())
l = [-1] * MAX
for i in range(N):
    a, b = map(int, input().split())
    l[a-1] = b-1
dp = [0] * MAX

for i in range(MAX):
    if l[i] == -1:
         continue
    dp[i] = 1
    for j in range(i):
        if l[i] > l[j] and l[j] != -1:
            dp[i] = max(dp[i], dp[j] + 1)
print(N - max(dp))
