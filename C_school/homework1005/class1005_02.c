#include<stdio.h>

int main()
{
    float r, perimeter, area;
    printf("請輸入半徑（公分）：");
    scanf("%f", &r);
    printf("周長為：%0.2f 公分\n", r*2*3.14);
    printf("面積為：%0.2f 平方公分\n", r*r*3.14);
    return 0;
}