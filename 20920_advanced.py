import sys
from collections import Counter
N, M = map(int, sys.stdin.readline().split())
x = Counter([i for _ in range(N) if len(i:= sys.stdin.readline().strip()) >= M])
result = sorted(list(x.keys())) # 알파벳 사전 순으로 먼저 정렬하고
result.sort(key=len, reverse=True) # 길이 순으로 정렬하고
result.sort(key=x.get,reverse=True) # 빈도수로 정렬
print('\n'.join(result))