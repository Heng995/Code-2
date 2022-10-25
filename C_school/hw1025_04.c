#include<stdio.h>
#include<stdlib.h>
int main()
{
    float money, month;
    printf("幾月：");
    scanf("%f", &month);
    printf("所用度數：");
    scanf("%f", &money);

    if(month>6&&month<9)
    {
       if(money<121)
        {
            printf("應繳：%f", money*1.63);
        } 
        else if(money<331)
        {
            printf("應繳：%f", (money-120)*2.38+120*1.63);
        }
        else if(money<501)
        {
            printf("應繳：%f", (money-330)*3.52+(120*1.63)+(170*2.38));
        }
        else if(money<701)
        {
            printf("應繳：%f", (money-500)*4.8+(120*1.63)+(170*2.38)+(200*3.52));
        }
        else if(money<1001)
        {
            printf("應繳：%f", (money-700)*5.66+(120*1.63)+(170*2.38)+(200*3.52)+(300*4.8));
        }
        else
        {
            printf("應繳：%f", (money-100)*6.41+(120*1.63)+(170*2.38)+(200*3.52)+(300*4.8)+(1000*5.66));
        }
    }
    else
    {
        if(money<121)
        {
            printf("應繳：%f", money*1.63);
        } 
        else if(money<331)
        {
            printf("應繳：%f", (money-120)*2.1+120*1.63);
        }
        else if(money<501)
        {
            printf("應繳：%f", (money-330)*2.89+(120*1.63)+(170*2.1));
        }
        else if(money<701)
        {
            printf("應繳：%f", (money-500)*3.94+(120*1.63)+(170*2.1)+(200*2.89));
        }
        else if(money<1001)
        {
            printf("應繳：%f", (money-700)*4.6+(120*1.63)+(170*2.1)+(200*2.89)+(300*3.94));
        }
        else
        {
            printf("應繳：%f", (money-100)*5.03+(120*1.63)+(170*2.1)+(200*2.89)+(300*3.94)+(1000*4.6));
        }
    }
    return 0;
    
}