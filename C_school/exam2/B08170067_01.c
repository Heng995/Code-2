#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float cal(float p, float r, int n)
{
    float S;

    S = p+pow((1+r),n);
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