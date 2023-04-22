#08.請寫一個遞迴程式goDown(n)，印出您第n階樓梯下到下一層樓面所走過的樓梯。假設樓高30層，樓梯0從地面1樓每上一階樓梯加1，每層樓有16階。例如goDown(36)印出”36階, 35階, 33階, 32階,到3樓!”
def goDown(n):
    if n <= 16:
        print(f"到1樓！")
        return
    else:
        print(f"{n}階, ", end="")
        goDown(n-2)
        if n % 16 == 1:
            print(f"到{n//16+1}樓！")


goDown(23)
