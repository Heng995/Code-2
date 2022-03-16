#include <stdio.h>
int main (void)
{
    int i = 0, n = 0, sum = 0;

    start:
    i++;

    if(i <= 100){
        if(i%2 > 0){
            n++;
            sum += i;
        }
        goto start;
    }
    printf("1~100有%d個奇數，奇數相加總合為%d", n, sum);

    return 0;
}