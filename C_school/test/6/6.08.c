#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("輸入三個邊:");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b > c) && (b + c > a) && (c + a > b)){
        if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)){
            printf("直角三角形\n");
        }
        else if((a*a + b*b < c*c) || (b*b + c*c < a*a) || (a*a + c*c < b*b)){
            printf("鈍角三角形\n");
        }
        else printf("銳角三角形\n");
    }
    else printf("不可構成三角形\n");

    return 0;
}