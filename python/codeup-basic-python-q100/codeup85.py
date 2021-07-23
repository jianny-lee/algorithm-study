r,g,b = map(int,input().split())
s = (r*g*b)/8
s /= 1024
s /= 1024

print('%.2f MB'%s)