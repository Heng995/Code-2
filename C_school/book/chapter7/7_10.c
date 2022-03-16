#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i = 1;
    while (i<=9)
    {
        int j = 1;
        while (j<=9)
        {
            printf("%d*%d=%2d   ", i ,j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }
}