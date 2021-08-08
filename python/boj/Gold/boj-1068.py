# N : 트리의 노드의 개수(N<=50)
# rnode_list : 0번 노드부터 N-1번 노드까지, 각 노드의 부모가 주어짐. 부모가 없으면 (루트) -1
# erase_num : 지울 노드의 번호

def dfs(n, arr):
    arr[n] = -2
    for i in range(len(arr)):
        if n == arr[i]:
            dfs(i, arr)

N = int(input())
rnode_list = list(map(int,input().split()))
erase_num = int(input())
cnt = 0

dfs(erase_num, rnode_list)

for i in range(len(rnode_list)):
    if rnode_list[i] != -2 and i not in rnode_list:
        cnt += 1

print(cnt)