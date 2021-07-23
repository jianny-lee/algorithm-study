a,b,c = map(int,input().split())
count = 1

while count<c:
    a*=b
    count+=1

print(a)