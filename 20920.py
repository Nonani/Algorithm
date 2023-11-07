from queue import PriorityQueue
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
dict = {}
for _ in range(N):
    word = input().rstrip()
    if len(word) < M: # 단어가 M미만인 경우
        continue
    
    if word in dict: # 단어가 있는 경우
        dict[word] += 1
    else: # 단어가 없는 경우
        dict[word] = 1
sorted_dict = sorted(dict.items(), key=lambda x : (-x[1], -len(x[0]), x[0]))# 빈도수가 높은 순으로 정렬
for x in sorted_dict:
    print(x[0])

