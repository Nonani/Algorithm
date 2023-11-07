def getDist(A, B):
    return abs(A[0] - B[0]) + abs(A[1] -  B[1])

N = int(input())
l = []
for _ in range(N):
    x, y = map(int, input().split())
    l.append((x, y))
for i in range(len(l)):
    for j in range(len(l)):
        if i == j:
            continue
        M[i][j] = getDist(l[i], l[j])

for i in range(len(M)):
    for j in range(len(M)):
        print(M[i][j], end=' ')