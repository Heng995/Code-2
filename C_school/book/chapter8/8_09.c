#include <stdio.h>
#include <stdlib.h>
double Leibniz(int);
double power(double, int);
int main (void)
{
    int i;
    for(i=1;i<=1000;i++)
        printf("Leibniz(%3d)=%12.10f\n", i, Leibniz(i));
    system ("pause");
    return 0;
}

double Leibniz (int n)
{
    int k;
    double sum = 0;
    for(k=1;k<=n;k++)
        sum=sum+power(-1.0, k-1)/(2*k-1);
    return 4*sum;
}

double power(double n, int x)
{
    int i;
    double sum = 1.0;
    for(i=1;i<=x;i++)
        sum=sum*n;
    return sum;
}