# cook your dish here
matches = [6,2,5,5,4,5,6,3,7,6]
def countMatches(num):
    count = 0
    num = str(num)
    for digit in num:
        count+=matches[int(digit)]
    return count
    
for _ in range(int(input())):
    a,b = map(int,input().split())
    print(countMatches(a+b))