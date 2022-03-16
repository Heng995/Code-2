#include <stdio.h>
int main(void)
{
    int number;
    printf("輸入數字:");
    scanf("%d", &number);

    if(number == 0){
        printf("0等於0\n");
    }
    else if(number > 0){
        printf("大於0\n");
    }
    else{
        printf("小於0\n");
    }
    return 0;
}