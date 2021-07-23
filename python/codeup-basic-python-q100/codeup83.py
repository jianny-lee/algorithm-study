r,g,b = map(int, input().split())
count = 0

for i in range(r):
    for j in range(g):
        for z in range(b):
            print('%d %d %d' %(i,j,z))
            count+=1

print(count)