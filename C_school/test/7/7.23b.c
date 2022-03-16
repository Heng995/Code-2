#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i = 0, n=0, sum=0;
    printf("1+2+3+...+n = ?\n");
    printf("n = ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("1+2+3+...+%d = %d\n", n, sum);
    system("pause");
    return 0;
}