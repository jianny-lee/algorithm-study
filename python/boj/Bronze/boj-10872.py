n = int(input())
result = 1
def factorial(num):
    global result

    if num==0:
        print(result)
        return
    elif num!=1:
        result *= num
        factorial(num-1)
    else:
        print(result)

factorial(n)