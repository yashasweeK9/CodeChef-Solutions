# cook your dish here
def stat(str):
    maxCount = 0
    count = 0
    for i in str:
        if(i in "aeiou"):
            count+=1
        else:
            if(count>maxCount):
                maxCount = count
            count=0
    if(count>maxCount):
        maxCount = count
    return "Happy" if(maxCount>2) else "Sad"

for _ in range(int(input())):
    print(stat(input()))
    
