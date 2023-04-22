def gcd(m, n):
    if m < n:
        return gcd(n, m)
    elif n == 0:
        return m
    else:
        return gcd(n, m % n)
