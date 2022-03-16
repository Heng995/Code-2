#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int n=1, i = 0, sum = 0;
    printf("2+4+6+..+n=?\n");
 

    while (n%2 != 0)
    {
        printf("n = ");
        scanf("%d", &n);
    }
    while (i<=n)
    {
        sum += i;
        i += 2;
    }

    printf("2+4+6+..+n=%d\n",sum);
    system("pause");
    return 0;
}