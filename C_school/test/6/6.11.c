#include <stdio.h>
int main(void)
{
    int hour;
    double money = 0;
    printf("請輸入工作時數:");
    scanf("%d", &hour);

    if(hour <= 60){
        printf("薪資為%d", hour*75);
    }
    else if(hour > 60 && hour <= 75){
        printf("薪資為%0.2f", 60*75+(hour-60)*1.25*75);
    }
    else printf("薪資為%0.2f", 60*75+(15*1.25*75)+((hour-75)*1.75*75));
    return 0;    
}