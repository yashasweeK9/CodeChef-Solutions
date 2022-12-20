# cook your dish here
def lissGen(n,s):
    liss = []
    for x in range(n+1):
        for y in range(n+1):
            if(x+y==s):
                liss.append([x,y])
    return liss

def pairGen(n,s):
    liss = lissGen(n,s)    
    maxDiff = 0
    for pair in liss:
        val = abs(pair[0]-pair[1])
        if(val>maxDiff):
            maxDiff = val
    return maxDiff
    
for _ in range(int(input())):
    n,s = map(int,input().split())
    print(pairGen(n,s))