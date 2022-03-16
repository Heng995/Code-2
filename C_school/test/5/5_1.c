#include <stdio.h>
int main(void)
{
    int num;
    printf("Input an integer : ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("The integer %d is greater than 0\n", num);
    }
    else if(num<0)
    {
        printf("The integer %d is less than 0\n", num);
    }
    else
    {
        printf("The integer %d is equal than 0\n", num);
    }

    return 0;
}