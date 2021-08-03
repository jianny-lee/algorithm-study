x = int(input())
width,height = 1,1
line = 1
while x > line:
    x-=line
    line+=1

if line%2==0:
    width = x
    height = line - x + 1
else:
    width = line - x + 1
    height = x

print(width,'/',height,sep='')