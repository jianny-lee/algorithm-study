n = int(input())
a = list(map(int,input().split()))
min = a[0]

for i in range(1,n):
    if min > a[i]:
        min = a[i]

print(min)