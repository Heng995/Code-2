#include <stdio.h>
int main (void)
{
    int i = 1, sum = 0;
    while (sum <= 100)
    {
        sum += i;
        printf("從1累積加到%2d=%2d\n", i, sum);
        i++;
    }
    printf("必須累加到%d\n", i-1);
    return 0;
}