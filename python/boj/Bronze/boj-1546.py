n = int(input())
score = list(map(int,input().split()))
score.sort(reverse=True) #내림차순으로 점수 재정렬
high_score = score[0] #최고 성적
new_score = []

# 점수 사기치기
for i in score:
    new_score.append(i/high_score*100)

sum = 0
# 새로운 평균 내기
for i in new_score:
    sum+=i

print(sum/n)