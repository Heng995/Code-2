//輸入一個溫度(temperature)，若溫度介於0~10度則顯示”cold”，
//若溫度介於11~20度則顯示”cool”，若溫度介於21~30度則顯示”warm”，
//若31度以上則顯示”hot”。
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp;
    printf("輸入一個溫度:");
    scanf("%d", &temp);
    if(temp<=10)   
    {
        printf("cold!\n");
    }
    else if(temp<=20)
    {
        printf("cool!\n");

    }
    else if(temp<=30)
    {
        printf("warm!\n");
    }
    else
    {
        printf ("hot!\n");
    }
    return 0;
}