#include <stdio.h>
int main(void)
{
    int score;
    printf("學生成績:");
    scanf("%d", &score);

    if(score >= 80 && score < 100){
        printf("A級");
    }
    else if(score >= 60 && score < 80){
        printf("B級");
    }
    else printf("C級");
    return 0;
}