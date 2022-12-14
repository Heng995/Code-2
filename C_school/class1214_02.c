#include"class1214-2.h"
int main()
{

    int amount, curr1,curr2;
    float rate1, rate2;
    
    printf("幣值轉換:\n");
    printf("==========================\n");

    printf("1.台幣(NTD)\t2.美金(USD)\t3.日幣(JPY)\n");
    printf("4.港幣(HKD)\t5.英鎊(GBP)\t6.歐元(EUR)\n\n");

    printf("請輸入想轉換的幣值(1~6):");
    scanf("%d", &curr1);
    switch (curr1)
    {
        case 1:rate1=NTD;
            break;
        case 2:rate1=USD;
            break;
        case 3:rate1=JPY;
            break;
        case 4:rate1=HKD;
            break;
        case 5:rate1=GBP;
            break;
        case 6:rate1=EUR;
            break;
    }
    printf("請輸入欲轉換金額：");
    scanf("%d", &amount);

    printf("請選擇想轉換的幣值(1~6)：");
    scanf("%d", &curr2);
    switch (curr2)
    {
        case 1:rate2=NTD;
            break;
        case 2:rate2=USD;
            break;
        case 3:rate2=JPY;
            break;
        case 4:rate2=HKD;
            break;
        case 5:rate2=GBP;
            break;
        case 6:rate2=EUR;
            break;
    }
    
    printf("\n%d",amount);
    OUTPUT(curr1);
    
    printf("可換成 %.0f", amount*EXCHANGE(rate1, rate2));
   
    printf("\n\n");
    system("pause");
    return 0;
}