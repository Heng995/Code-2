cm = int(input('請輸入身高(cm)'))
kg = int(input('請輸入體重(KG)'))
cm = cm/100
bmi = round(kg/(cm**2), 2)
print('你的BMI是', bmi)
if(bmi<18.5):
    print('體重過輕')
elif(bmi<24):
    print('體重適中')
elif(bmi<=27):
    print('輕微肥胖')