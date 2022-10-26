#include<stdio.h>
#include<stdlib.h>
int main()
{
    int score, target=68;
    printf("請輸入:");
    scanf("%d", &score);
    if(score == target)
    {
        printf("答對了\n");
    }
    else if(score<target)
    {
        printf("Too small\n");
    }
    else
    {
        printf("Too big\n");
    }
    return 0;
}