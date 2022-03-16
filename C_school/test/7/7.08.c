#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    printf("1~100可以被7整除,有可3整除：\n");
    for(int i=1;i<=100;i++)
    {
        if(i%7==0 && i%3==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}