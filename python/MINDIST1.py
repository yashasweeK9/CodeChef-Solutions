import math
def findLowestAdjacentAbs(lis):
    index = 0
    lowest = math.inf
    while(index<len(lis)-1):
        val = abs(lis[index]-lis[index+1]) 
        if(val<lowest):
            lowest = val
        index+=1
    return lowest

def convertBin(string):
    oldStr = string
    newStr = string.replace("100","1")
    while(oldStr!=newStr):
        oldStr = newStr
        newStr = oldStr.replace("100","1")
    return newStr

def getOneArr(string):
    liss = list(string)
    indexLiss = []
    for index in range(len(liss)):
        if(liss[index]=="1"):
            indexLiss.append(index)
    return indexLiss

for _ in range(int(input())):
    n = int(input())
    string = input()
    print(findLowestAdjacentAbs(getOneArr(convertBin(string))))


