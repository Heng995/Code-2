#include <stdio.h>
int main (void)
{
    int year=1900, allyear=0;
    printf("閏年有:\n");
    here:
    year++;
    if(year <= 2000){
        if((year%4 == 0 && year%100 != 0)||(year%400 == 0)){
            allyear++;
            printf("%d ", year);
        }
        goto here;
    }
    printf("\n一共有%d年", allyear);
    return 0;
}