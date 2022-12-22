def formOptimDict(categor,time):
    optimDict =dict(zip(categor,time))
    for index in range(len(optimDict)):
        if(time[index]<optimDict[categor[index]]):
            optimDict[categor[index]] = time[index]
    return optimDict

for _ in range(int(input())):
    n,k = map(int,input().split())
    categor = list(map(int,input().split()[:n]))
    time = list(map(int,input().split()[:n]))
    dictionary = formOptimDict(categor,time)
    if(len(dictionary)<k):
        print("-1")
    else:
        print(sum(list(sorted(dictionary.values()))[:k]))