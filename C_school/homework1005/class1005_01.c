#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,w,sum;
    printf("請輸入長（公分）：");
    scanf("%d", &l);
    printf("請輸入寬（公分）：");
    scanf("%d", &w);
    sum = l * w;
    printf("面積為：%d平方公分\n", sum);
    return 0;
}