#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i=1, sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0||i%8==0)
        {
            sum+=i;
            printf("%d+%d=%d\n",sum-i, i, sum);
        }
    }
    return 0;
}