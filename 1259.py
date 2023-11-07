def is_palindrome(num):
    for i in range(0, len(num)//2):
        if num[i] != num[-1 * (i + 1)]:
            return False
    return True


num = input()
while num != '0':
    if is_palindrome(num):
        print("yes")
    else:
        print("no")
    num = input()
