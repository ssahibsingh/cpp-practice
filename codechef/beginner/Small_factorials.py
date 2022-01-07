for _ in range(int(input())):
    num = int(input())
    factorial = 1
    for i in range(1,num + 1):
       factorial = factorial*i
    print(factorial)