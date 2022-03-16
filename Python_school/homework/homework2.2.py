import math

pet = input('你的寵物是「狗」還是「貓」?')

if(pet == '狗'):
    dog_age = input('你的狗幾歲了?')
    human_age = int(16 * math.log(int(dog_age)) + 31)
    print('你的狗是人的', human_age, '歲')
elif(pet == '貓'):
    cat_age = input('你的貓幾歲了?')
    if(cat_age == 1):
        human_age = 15
    elif(cat_age == 2):
        human_age = 24
    else:
        human_age = int(4 * (int(cat_age)) + 16)
    print('你的貓是人的', human_age, '歲')
else:
    print('只能輸入「狗」或「貓」!')