# 책 '이것이 취업을 위한 코딩 테스트다'
# 예제 4-1 상하좌우
n = int(input())
s = list(map(str, input().split()))

# 사용자의 위치(0으로 시작하도록 되어있는데, 나중에 출력값에서는 +1을 하기.
# 왜냐하면 조건이 원래는 (1,1)에서 시작하도록 되어있기 때문에
loc_w, loc_h = 0, 0


for move in s:
    if move == "R" and loc_w + 1 != n:
        loc_w += 1  # 가로 위치 이동
    if move == "L" and loc_w - 1 != -1:
        loc_w -= 1
    if move == "U" and loc_h - 1 != -1:
        loc_h -= 1 # 세로 위치 이동
    if move == "D" and loc_h + 1 != n:
        loc_h += 1

print(loc_h + 1, loc_w + 1)