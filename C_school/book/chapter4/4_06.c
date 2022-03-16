#include <stdio.h>

int main(void)
{
    int a;
    printf("請輸入一個數： ");
    scanf("%d", &a);
    printf("%d八進位是%o\n", a,a);
    printf("%d十六進位是%x\n", a,a);
    
    return 0;
}
