
while True:
    
        num = int(input())
        result={}
        while True:
            for i in range(2,num+1):
                if num%i==0:
                    if i in result:
                        result[i] = result[i]+1
                    else:
                        result[i]=1
                    num = num//i
                    break
            if num ==1:
                break
            

output = ''               # 建立 output 變數為空字串
for i in result:          # 取出 result 的每個 key 與 value
  if result[i] != 1:      # 如果 key 的 value 不為 1，表示需要使用「次方」表現
    output = f'{output}{i}^{result[i]} * '  # 使用次方表現
  else:
    output = f'{output}{i} * '   # 單純只有一個數字
output = output[:-2]      # 去除結尾的空白與星號
print(output)