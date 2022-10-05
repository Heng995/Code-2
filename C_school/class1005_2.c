#include<stdio.h>
#include<stdlib.h>
int main()
{
    float c,f;
    printf("請輸入攝氏：");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("華氏為%0.2f度",f);
    return 0;

}