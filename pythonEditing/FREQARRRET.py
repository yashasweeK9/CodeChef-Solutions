def changes(liss):
    arr = []
    for num in range(1,len(liss)):
        for index in range(len(liss)):
            pass
        


for _ in range(int(input())):
    n = int(input())
    liss = list(map(int,input().split()[:n]))
    string = "".join(liss)
    temp = string
    sets = set(liss)
    if(sum(sets)>n):
        print(-1)
    else:
        while(True):
            pass