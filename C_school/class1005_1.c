#include<stdio.h>
#include<stdlib.h>
int main()
{
    float c,f;
    printf("請輸入攝氏溫度：");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("華氏溫度為%0.1f度",f);
    return 0;
}