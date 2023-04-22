#02.請寫一個遞迴程式fib(n)，列印出整數n的第n個費式數(Fibonacci Number)

def fib(n):
    if n == 0:
        return 0
    
    elif n == 1:
        return 1
    
    else:
        return fib(n-1) + fib(n-2) 

n02 = 10 #n為 10
print('整數',n02,'的第n個費式數:', fib(n02))