h = int(input(),16)

for i in range(1, 16):
    print('%X'%h, '*%X'%i, '=%X'%(h*i), sep='')