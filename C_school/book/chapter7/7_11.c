#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    for(int i = 1;i<=6;i++)
    {
        for(int j= 1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}