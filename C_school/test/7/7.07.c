#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    printf("1~100可被6整除的有:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%6==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}