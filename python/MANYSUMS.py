def getDistinct(l,r):
    return (r*2)-(l*2)+1
for _ in range(int(input())):
    l,r = map(int,input().split())
    print(getDistinct(l,r))