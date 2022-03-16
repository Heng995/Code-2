#include <stdio.h>
int main (void)
{
    int i, n;
    double sum = 0.0;
    printf("n = ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum += 1.0/(double)i;
    }
    printf("%f\n", sum);
    return 0;
}