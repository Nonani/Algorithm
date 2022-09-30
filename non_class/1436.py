N = int(input())
cnt = 0
num = 665
while cnt < N:
    num += 1
    if str(num).find("666") != -1:
        cnt += 1

print(num)
