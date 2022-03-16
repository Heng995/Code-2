#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i = 1;
    
    while (i<=3)
    {
        int n;
        printf("n = ");
        scanf("%d", &n);

        if(n>=1 && n<=50)
        {
            int j=1;
            while (j<=n)
            {
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }
       
    system("pause");
    return 0;
}