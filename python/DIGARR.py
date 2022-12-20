def isFiveMultiple(num):
    num = str(num)
    if("0" in num or "5" in num):
        return True
    return False

for _ in range(int(input())):
    d = input()
    n = int(input())
    print("Yes" if isFiveMultiple(n) else "No")
