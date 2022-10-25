#include<stdio.h>
#include<stdlib.h>
int main()
{
    int money,a;
    printf("請輸入水費度數：");
    scanf("%d", &money);

    if(money<11)
    {
        printf("應繳：%d\n", money*7);
    }
    else if(money<31)
    {
        printf("應繳：%d\n",(money-10)*9+70);

    }
    else if(money<51)
    {
        printf("應繳：%d\n",(money-30)*11+70+180);
    }
    else
    {
        printf("應繳：%d\n",(money-50)*9+70+180+220);
    }
    return 0;
}