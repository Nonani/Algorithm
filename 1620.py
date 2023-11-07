'''
 # @ Author: Jinwoo Choi
 # @ Create Time: 2022-11-05 21:50:51
 # @ Modified by: Jinwoo Choi
 # @ Modified time: 2022-11-05 21:52:32
 # @ Problem name: 나는야 포켓몬 마스터 이다솜
 # @ Solution: 단순 구현
 # @ result:
 '''
import sys

input = sys.stdin.readline
def find(l, str):
    for i in range(len(l)):
        if l[i] == str:
            return i + 1
    return -1
N, M = map(int, input().split(" "))
d = {}
for i in range(1, N+1):
    str = input().rstrip()
    d[str] = i
    d[i] = str

for _ in range(M):
    str = input().rstrip()
    if str.isdigit():
        print(d[int(str)])
    else:
        print(d[str])


    
