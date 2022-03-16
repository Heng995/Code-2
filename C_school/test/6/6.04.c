#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int number;
    printf("輸入一個整數:");
    scanf("%d", &number);

    if(number > 0){
        printf("絕對值為%d", number);
    }
    else{
        printf("絕對值為%d", number = abs (number));
    }
    return 0;
}