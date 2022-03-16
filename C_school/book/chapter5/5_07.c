#include <stdio.h>

int main(void)
{
    double a=3, b=5;
    printf("計算前a=%5.2f,b=%5.2f\n", a,b);
    a/=b++;
    b*=a;
    printf("計算後a=%5.2f,b=%5.2f\n", a,b);
    fflush(stdin);
    
    int c=8;
    printf("a=%d\n",++c);
    printf("a=%d\n",c--);
    return 0;
}
