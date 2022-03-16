#include <stdio.h>
int main (void)
{
    int n, i=0,sum=0;
    do
    {
        printf("2+4+...+n = ?\n");
        printf("n = ");
        scanf("%d", &n);
    } while (n%2!=0);
    do
    {
       sum +=i;
       i+=2;
    }while (i<=n);
   
    printf("2+4+...+n = %d", sum);
    return 0;
}