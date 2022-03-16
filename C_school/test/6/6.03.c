#include <stdio.h>
int main(void)
{
    int number;
    printf("輸入一個整數:");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("偶數\n");
    }
    else{
        printf("奇數\n");
    }
    return 0;
}