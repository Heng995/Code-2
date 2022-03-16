#include <stdio.h>
int main(void)
{
    int score;
    int x=0, a=0, b=0, c=0;
    here:
    printf("輸入分數:");
    scanf("%d", &score);
    x++;
    if(score >= 0 && score < 59){
        printf("成績為C\n");
        c++;
    }
    else if(score >= 60 && score <= 75){
        printf("成績為B\n");
        b++;
    }
    else{
        printf("成績為A\n\n");
        a++;
    }
    if(x<10)goto here;
    printf("以輸入10位同學成績\n\n");
    printf("成績為A有%d位\n", a);
    printf("成績為B有%d位\n", b);
    printf("成績為C有%d位\n", c);
    return 0;
}