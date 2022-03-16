#include <stdio.h>
int main(void)
{
    int a = 4, b = 6, c = 6, larger;

    a>b ? (larger=a) : (larger=b);// a>b ? larger=1 : larger=2//
    printf("%d數值比較大\n", larger);

    return 0;
}