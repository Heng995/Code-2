#include <stdio.h>
int main (void)
{
    int year;
    printf("輸入西元:");
    scanf("%d", &year);

    if((year%4 == 0 && year%100 != 0)||(year%400 == 0)){
        printf("閏年\n");
    }
    else printf("平年\n");
    return 0;
}