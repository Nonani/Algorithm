'''
 # @ Author: Jinwoo Choi
 # @ Create Time: 2022-10-01 05:03:08
 # @ Modified by: Jinwoo Choi
 # @ Modified time: 2022-10-01 05:03:14
 # @ Problem name: 직각삼각형
 # @ Solution: Implementation 
 # @ result: Success
 '''


while True:
    l = list(map(int, input().split(" ")))
    l.sort()
    if l[0] == 0 and l[1] == 0 and l[2] == 0:
        break
    if l[0]**2 + l[1]**2 == l[2]**2:
        print("right")
    else:
        print("wrong")
