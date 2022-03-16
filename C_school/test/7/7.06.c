#include <stdio.h>
int main (void)
{
    int i=0, n;
    printf("輸入一個數字：");
    scanf("%d", &n);
    printf("他的因數有： ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}