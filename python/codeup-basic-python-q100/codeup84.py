h,b,c,s = map(int, input().split()) #44100 16 2 10

r = (h*b*c*s)/8
r = r/1024
r = r/1024

print('%.1f MB'%r)