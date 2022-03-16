#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int n, i=1,fac=1;
    do
    {
    printf("請輸入N:");
    scanf("%d", &n);
    }
    while(n<=0);
    
    do
    {
        fac *= i++;
    }
    while (i<=n);
    printf("%d!=%d\n", n, fac);

    system("pause");
    return 0;
}