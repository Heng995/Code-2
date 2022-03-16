# 三個 List
a = [2, 4, 6, 8, 10, 12]
b = [1, 3, 5, 7, 9, 11]
c = [1, 2, 3, 5, 8, 13]

print('第一題')
num1 = int(input('輸入一個數字:'))
print(a.index(num1))

print('第二題')
num2 = int(input('輸入一個數字:'))
for i in a:
    for j in b:
        if num2-i-j == 0:
            print((a.index(i), b.index(j)))

print('第三題')
num3 = int(input('請輸入一個數字:'))
for i in a:
    for j in b:
        for k in c:
            if num3-i-j-k == 0:
                print((a.index(i), b.index(j), c.index(k)))
    
num = input('num = ?')
aa = num ** num            
print(aa)