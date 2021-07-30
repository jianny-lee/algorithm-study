text = ['   + -- + - + -   ',
        '   + --- + - +   ',
        '   + -- + - + -   ',
        '   + - + - + - +   ']
s = []
# ord() : 문자 -> 숫자
# chr() : 숫자 -> 문자
for i in text:
    s+=chr(int(i.strip().replace(' ','').replace('+','1').replace('-','0'),2))

print(''.join(s))