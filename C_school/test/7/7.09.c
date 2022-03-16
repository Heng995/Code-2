#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int sum = 0;
    for(int i=1;i<=50;i++)
    {
        if(i%2==1)
        {
            sum+=i*i;
        }
        else
        {
            sum-=i*i;
        }
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}