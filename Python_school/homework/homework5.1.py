import random
x = [random.randint(0,1000)+i for i in range(10)]
print(x)

x = [[random.randint(0,1000) for i in range(5)] for x in range(5)]
for i in range(5):
    x[0][i] += 2*i + 1
print(x)

x = [[random.randint(0, 1000) for i in range(5)] for x in range(5)]
for i in range(5):
    x[i][0] += 2*i+1
print(x)