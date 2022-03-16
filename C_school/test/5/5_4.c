#include <stdio.h>
int main (void)
{
    int score;
    printf("Input the score : ");
    scanf("%d", &score);

    if(score>=80 && score <=100)
    {
        printf("Grade A\n");
    }
    else if(score>=60 && score<=80)
    {
        printf("Gread B\n");
    }
    else if(score>=0 && score <=59)
    {
        printf("Gread C\n");
    }
    return 0;
}