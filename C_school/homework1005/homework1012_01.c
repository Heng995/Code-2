#include<stdio.h>
#include<stdlib.h>
int main()
{
    int score, target=60;
    printf("請輸入:");
    scanf("%d", &score);
    
    if(score == target)
    {
        printf("答對了\n");
    }
    else if(score<target)
    {
        printf("太小\n");
    }
    else
    {
        printf("太大\n");
    }
    return 0;
}