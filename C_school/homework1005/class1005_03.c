#include<stdio.h>
int main()
{
    int A,B,C,sum;
    printf("A^2+3B+c=\n");
    printf("A=:");
    scanf("%d", &A);
    printf("B=:");
    scanf("%d", &B);
    printf("C=:");
    scanf("%d", &C);
    sum = A*A+3*B+C;
    printf("Ans:%d\n",sum);
    return 0;
}