#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("輸入三個邊:");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b > c) && (b + c > a) && (c + a > b)){
        printf("可構成三角形\n");
    }
    else{
        printf("不可構成三角形\n");
    }
    return 0;
}