#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int n,sum;
    printf("1+2+3+...+n = ?\n");
    printf("n = ");
    scanf("%d", &n);

    int i;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("1+2+3+...+%d = %d\n", n, sum);

    system("pause");
    return 0;
}