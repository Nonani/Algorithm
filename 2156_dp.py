import sys

input = sys.stdin.readline
n = int(input())
l = [0] * 10000
dp = [0] * 10000
for i in range(n):
    l[i] = int(input())

dp[0] = l[0]
dp[1] = l[1] + l[0]
dp[2] = max(l[0] + l[2], l[1] + l[2], dp[1])
for i in range(3,n):
    dp[i] = max(dp[i-2]+l[i], dp[i-1], dp[i-3]+l[i-1]+l[i])
print(max(dp))

