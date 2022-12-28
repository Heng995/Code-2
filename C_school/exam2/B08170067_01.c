#include<stdio.h>
#include<stdlib.h>
float cal(float p, float r, int n)
{
    float S;
    S = p+(1+r)*(1+r);
    return S;
}
int main()
{
    float p,f;
    int n;
    printf("input p, f, n:");
    scanf("%f%f%d", &p,&f,&n);
    printf("%0.2f", cal(p,f,n));
    return 0;
}