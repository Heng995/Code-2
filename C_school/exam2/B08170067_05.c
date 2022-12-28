#include<stdio.h>
#include<stdlib.h>
float catalan(int n)
{
    int c1=1;
    float sum=0;
    sum = (((4*n)+2)*n)/(n+2);
    return sum;
}
int main()
{
    float n;
    printf("輸入一個整數:");
    scanf("%f", &n);
    printf("%f\n",catalan(n));
    return 0;
}