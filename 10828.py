'''
 # @ Author: Jinwoo Choi
 # @ Create Time: 2022-10-02 13:32:37
 # @ Modified by: Jinwoo Choi
 # @ Modified time: 2022-10-02 13:32:39
 # @ Problem name: 스택
 # @ Solution: stack
 # @ result: success
 '''

import sys


def push(x):
    global stack, top
    top += 1
    stack[top] = x


def pop():
    global stack, top
    if top == -1:
        return -1
    num = stack[top]
    top -= 1
    return num


N = int(sys.stdin.readline())
stack = [0 for _ in range(N)]
top = -1

for _ in range(N):
    i = sys.stdin.readline().split()
    if i[0] == "push":
        push(i[1])
    elif i[0] == "top":
        if top == -1:
            print(-1)
        else:
            print(stack[top])
    elif i[0] == "pop":
        print(pop())
    elif i[0] == "empty":
        print(1 if top == -1 else 0)
    elif i[0] == "size":
        print(top + 1)
