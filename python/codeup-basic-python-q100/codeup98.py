board = [[]*10 for _ in range(10)] #미로 상자 초기화
for i in range(10):
   board[i]=list(map(int,input().split())) #미로상자에 구조와 먹이 위치 입력

x=1
y=1
board[x][y] = 9

while True:
    #만약 현재 위치가 먹이면 종료
    if board[x][y]==2:
        board[x][y] = 9
        break
    
    #현재 위치가 먹이가 아닐 때
    if board[x][y+1]!=1:
        board[x][y] = 9
        y+=1
        
    else:
        if board[x+1][y]!=1:
            board[x][y] = 9
            x+=1
        else:
            board[x][y]=9
            break
        
for i in range(10):
    for j in range(10):
        print(board[i][j],end=' ')
    print()