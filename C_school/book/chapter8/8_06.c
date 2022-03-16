#include <stdio.h>
#include <stdlib.h>
double dd (double, int);
int main (void)
{
    double x;
    int n;

    printf("請輸入底數與次方:");
    scanf("%lf, %d", &x, &n);
    printf("%.2lf的%d次方為%.2lf", x, n, dd(x,n));

    return 0;

}
double dd(double base, int n)
{
    int i;
    double p = 1.0;
    for(i=1;i<=n;i++)
        p=p*base;
    return p;
}