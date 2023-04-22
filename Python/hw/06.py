#06.請寫一個遞迴程式gcd(m, n)，找出兩個數整數m, n的最大公因數。

def gcd(m, n):
    if n == 0:
        return m
    else:
        return gcd(n, m % n)

m06 = 18
n06 = 42
print("最大公因數為：", gcd(m06, n06))
