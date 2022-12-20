t = int(input())
ans = []
for _ in range(t):
    n,k = map(int,input().split())
    if(n>=k and k!=0):
        print(n%k)
    else:
        print(n)