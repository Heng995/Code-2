#01.請寫一個遞迴程式fac(n)，列印出整數n的階乘(factorial)

def fac(n):
    if n == 1:
        return 1
    else:
        return n * fac(n-1)

n01 = 3 #n為 3
print('整數',n01,'的階乘:', fac(n01))