#include <stdio.h>
int main (void)
{
    int i=1, sum=0;
    while (i<=10)
    {
        printf("%2d^2=%d\n",i,i*i);
        sum += i*i;
        i++;
    }
    printf("1^2 ~ 10^2 = %d\n", sum);
    return 0;
}