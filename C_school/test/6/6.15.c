#include <stdio.h>
int main (void)
{
    int x, money, lessmoney, lessmoney2;
    int m1000 = 0, m500 = 0, m100 = 0, m50 = 0, m10 = 0, m5 = 0, m1 = 0;
    printf("商品金額:");
    scanf("%d", &x);
    printf("收取金額:");
    scanf("%d", &money);
    lessmoney = money - x;
    if(money >= x){
        m1000 = lessmoney / 1000;
        lessmoney2 = lessmoney - m1000 * 1000;
        m500 = lessmoney2 / 500;
        lessmoney2 = lessmoney2 - m500 * 500;
        m100 = lessmoney2 / 100;
        lessmoney2 = lessmoney2 - m100 * 100;
        m50 = lessmoney2 / 50;
        lessmoney2 = lessmoney2 - m50 * 50;
        m10 = lessmoney2 / 10;
        lessmoney2 = lessmoney2 - m10 * 10;
        m5 = lessmoney2 / 5;
        lessmoney2 = lessmoney2 - m5 * 5;
        m1 = lessmoney2 / 1;

        printf("店員應找回%d張1000元，%d張500的，%d張100的，%d個50元，%d個10元，%d個5元，%d個1元\n", m1000, m500, m100, m50, m10, m5, m1);
    }
    else printf("金錢不夠\n");

    return 0;
}