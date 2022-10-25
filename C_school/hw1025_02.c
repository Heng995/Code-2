#include<stdio.h>
#include<stdlib.h>
int main()
{
    float money;
    printf("輸入所得淨額：");
    scanf("%f", &money);

    if(money<540001)
    {
        printf("應繳納：%f\n", money*0.05);
    }
    else if(money<1210001)
    {
        printf("應繳納：%f\n", money*0.12-37800);
    }
    else if(money<2420001)
    {
        printf("應繳納：%f\n", money*0.2-134600);
    }
    else if(money<4530001)
    {
        printf("應繳納：%f\n", money*0.3-376600);
    }
    else
    {
        printf("應繳納：%f\n", money*0.4-829600);
    }
}