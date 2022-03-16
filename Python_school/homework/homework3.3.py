h = float(input('請輸入您的身高(公分): '))
w = float(input('請輸入您的體重(公斤): '))

bmi = w / ((h / 100)**2)

if bmi <= 18.5:
    print('你的 BMI 是', (round(bmi,1)), '你太輕了!')
elif bmi > 18.5 and bmi <= 24:
    print('你的 BMI 是', (round(bmi,1)), '你的體重正常!')
elif bmi > 24 and bmi <=27:
    print('你的 BMI 是', (round(bmi,1)), '你是體重過重!')
elif bmi > 27 and bmi <= 30:
    print('你的 BMI 是', (round(bmi,1)), '你是輕度肥胖!')
elif bmi > 30 and bmi <= 35:
    print('你的 BMI 是', (round(bmi,1)), '你是中度肥胖!')
else:
    print('你的 BMI 是', (round(bmi,1)), '你是重度肥胖!')