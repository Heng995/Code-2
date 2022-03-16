#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
         break;
        printf("i=%d\n",i);
    }
    printf("跳拖回圈, i=%d\n", i);

    system("pause");
    return 0;
}