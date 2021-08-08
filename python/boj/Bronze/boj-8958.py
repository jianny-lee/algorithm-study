n = int(input())
arr = []
for i in range(n):
    arr.append(input())

for i in range(n):
    result = 0
    score = 0
    for j in range(len(arr[i])):
        if arr[i][j] == 'O':
            score+=1
            result+=score
        else:
            score=0

    print(result)
