t = int(input())
for i in range(t):
    t1,t2,t3,t4 = map(int,input().split())
    if t2-t1==t4-t3:
        t5 = t4+(t2-t1)
    if t2/t1==t4/t3:
        (t5) = int(t4*(t2/t1))
    print(t1,t2,t3,t4,t5)