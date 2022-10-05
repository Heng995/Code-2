#include<stdio.h>
int main()
{
    int money, pay, d500, d100, d50, d10, d5, d1;
    printf("共花了多少錢：");
    scanf("%d", &pay);
    printf("共付了多少錢：");
    scanf("%d", &money);

    money=money-pay;

    d500=money/500;
    d100=(money%500)/100;
    d50=(money%100)/50;
    d10=(money%50)/10;
    d5=(money%10)/5;
    d1=(money%5)/1;
    
    printf("500: %d張\n", d500);
    printf("100: %d張\n", d100);
    printf(" 50: %d張\n", d50);
    printf(" 10: %d張\n", d10);
    printf("  5: %d張\n", d5);
    printf("  1: %d張\n", d1);

    return 0;
}