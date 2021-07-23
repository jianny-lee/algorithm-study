a,b,c,d = map(int, input().split()) #순서 : 시작값, 곱할값, 더할값, 몇번째인지?
count = 1

while count<d:
    a*=b
    a+=c
    count+=1

print(a)