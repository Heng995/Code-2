a = [int(i) for i in input().split(' ')]
s = (a[0]*2+a[1])%3
if(s==0):
    print('普通')
if(s==1):
    print('吉')
if(s==2):
    print('大吉')