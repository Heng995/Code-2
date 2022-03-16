#include <stdio.h>
int main (void)
{
    int n, i=1, sum = 0;
    printf("1+2+3+...n 總和大於等於1000\n");
    do
    {
        sum +=i;
        i++;
    }while (sum <= 1000);
    printf("n = %d", i-1);
    return 0;
}