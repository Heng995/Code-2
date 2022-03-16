#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int num, num1;
    printf("Input an integer : ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("the absolute value of %d is %d\n", num, num);
    }
    else
    {
        num1 = abs(num);
        printf("the absolute value of %d is %d\n", num, num1);
    }
    return 0;
}