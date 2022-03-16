#include <stdio.h>
#include <stdlib.h>
void sum(int), fac(int);
int main (void)
{
    sum(5);
    fac(5);

    system("pause");
    return 0;
}

void sum(int n)
{
    int i, total = 0;
    for(i=1;i<=n;i++)
        total += i;
    printf("1+2+3+....+%d = %d\n", n, total);
}

void fac(int n)
{
    int i, total = 1;
    for(i=1;i<=n;i++)
        total *= i;
    printf("1*2*3*....*%d = %d\n", n, total);
}
