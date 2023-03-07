#遞迴
# 5! = (5*4i)
#    = 5*(4*3!)
#    = 5*4*(3*2!)
#    = 5*4*3*(2*1)
#    = 120
def factorial(i):
    if i == 0:
        return 1
    else:
        ans=i*factorial(i-1)
    return ans

print(factorial(5))
            