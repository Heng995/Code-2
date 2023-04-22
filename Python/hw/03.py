#03.ArithmeticError請寫一個遞迴程式str2z(ch)，創造一個字串，從輸入的一個大寫英文字母串到Z

def str2z(ch):
    if ch == 'Z':
        return ch
    else:
        return ch + str2z(chr(ord(ch)+1))
   
    
ch03='H'
print(str2z(ch03))