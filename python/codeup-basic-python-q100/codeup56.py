a,b= map(int, input().split())

if ((bool(a) and not bool(b)) or (not bool(a) and bool(b))) == False:
    print('False')
else:
    print('True')