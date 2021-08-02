# 예제 입력
# 갖고있는 N종류의 동전들 내림차순으로 정렬
# 만들고 싶은 금액(k)을 중심으로 내림차순으로 정렬한 것들을 최대로 만들고, 그 다음 동전으로 넘어가기
n,k = map(int,input().split())
coins = []
count = 0
for i in range(n):
    coins.append(int(input()))

coins.sort(reverse=True)

for coin in coins:
    if k >= coin:
        count += k//coin
        k%=coin

print(count)