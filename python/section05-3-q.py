# Section05-3
# 파이썬 흐름제어(제어문)
# 제어문 관련 퀴즈(정답은 영상)

# 1 ~ 5 문제 if 구문 사용
# 1. 아래 딕셔너리에서 '가을'에 해당하는 과일을 출력하세요.
q1 =  {"봄": "딸기", "여름": "토마토", "가을": "사과"}
if q1.keys():
    loc = q1.get("가을")
    print(loc)

# 2. 아래 딕셔너리에서 '사과'가 포함되었는지 확인하세요.
q2 =  {"봄": "딸기", "여름": "토마토", "가을": "사과"}
q2_value = list(q2.values())
print(q2_value)
for i in q2_value:
    if i and "사과":
        print("포함!")
        break


# 3. 다음 점수 구간에 맞게 학점을 출력하세요.
# 81 ~ 100 : A학점
# 61 ~ 80 :  B학점
# 41 ~ 60 :  C학점
# 21 ~ 40 :  D학점
#  0 ~ 20 :  E학점
score = 81
if score > 80 and score <= 100:
    print("A학점")
elif score >60 and score <=80:
    print("B학점")
elif score >40 and score <=60:
    print("C학점")
elif score >20 and score <=40:
    print("D학점")
elif score >=0 and score <=20:
    print("E학점")

# 4. 다음 세 개의 숫자 중 가장 큰수를 출력하세요.(if문 사용) : 12, 6, 18
temp = [12,6,18]
t = temp[0]
for i in temp:
    if(t<i+1):
        t = i
print(t)

# 5. 다음 주민등록 번호에서 7자리 숫자를 사용해서 남자, 여자를 판별하세요. (1,3 : 남자, 2,4 : 여자)
pNo = "911111-3333333"
pNo = pNo.replace('-','')
pslice = pNo[6:]
if(pslice[0] == '2' or pslice[0] =='4'):
    print("여자")
else:
    print("남자")

# 6 ~ 10 반복문 사용(while 또는 for)

# 6. 다음 리스트 중에서 '정' 글자를 제외하고 출력하세요.
q3 = ["갑", "을", "병", "정"]
i = 0
while q3[i]!="정":
    print(q3[i], end=" ")
    i+=1

# 7. 1부터 100까지 자연수 중 '홀수'만 한 라인으로 출력 하세요.
i = 1
while i <= 100:
    if i%2==1:
        print(i, end=" ")
    i+=1
print()

# 8. 아래 리스트 항목 중에서 5글자 이상의 단어만 출력하세요.
q4 = ["nice", "study", "python", "anaconda", "!"]
for word in q4:
    if(len(word)>=5):
        print(word, end=" ")
print()

# 9. 아래 리스트 항목 중에서 소문자만 출력하세요.
q5 = ["A", "b", "c", "D", "e", "F", "G", "h"]
for alphabet in q5:
    if alphabet.islower():
        print(alphabet, end=" ")

# 10. 아래 리스트 항목 중에서 소문자는 대문자로 대문자는 소문자로 출력하세요.
q6 = ["A", "b", "c", "D", "e", "F", "G", "h"]
for alphabet in q6:
    if alphabet.islower():
        print(alphabet.upper(), end=" ")
    else:
        print(alphabet.lower(), end=" ")
