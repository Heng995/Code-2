Num_1 = int(input('請輸入第一個數字：'))## Enter first number
Num_2 = int(input('請輸入第二個數字：'))## Enter second number

if Num_1 < Num_2:   ## Compare two number
    Tmp_Num = Num_1
    Num_1 = Num_2
    Num_2 = Tmp_Num
    
while Num_2 != 0:
    Tmp_Num = Num_1 %  Num_2
    Num_1 = Num_2
    Num_2 = Tmp_Num

print('最大公因數(g.c.d):', Num_1)
