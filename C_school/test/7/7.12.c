#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int a=0, b=0, c=0, i=0;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i-(a*100))/10;
        c=i-(a*100)-(b*10);
        if((a*a*a)+(b*b*b)+(c*c*c) == i)
            printf("%d\n", i);
    }
    system("pause");
    return 0;
}