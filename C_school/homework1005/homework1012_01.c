#include<stdio.h>
#include<stdlib.h>
int main()
{
    int score, target;
    target=rand()%100+1;
    do{
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
    }while (score = target);
    
    return 0;
}