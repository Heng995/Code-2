#include <stdio.h>

int main(void)
{
    int score;
    
    printf("請輸入成績：");
    scanf("%d", &score);
    
    if(score<0||score>100)
        printf("成績有誤！\n");
    if(score>=50 && score <60)
        printf("需要補考！\n");
    
    return 0;
}
