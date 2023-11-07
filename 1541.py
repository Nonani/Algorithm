'''
 # @ Author: Jinwoo Choi
 # @ Create Time: 2022-11-08 11:47:32
 # @ Modified by: Jinwoo Choi
 # @ Modified time: 2022-11-08 11:47:54
 # @ Problem name: 잃어버린 괄호
 # @ Solution: 단순 구현
 # @ result: success
 '''

import sys

input = sys.stdin.readline
str = input().split('-')
ans = 0
for i in range(len(str)):
    tmp = 0
    tmp_str = str[i].split('+')
    for j in range(len(tmp_str)):
        tmp+=int(tmp_str[j])
    if i == 0:
        ans += tmp 
    else:
        ans -= tmp

print(ans)