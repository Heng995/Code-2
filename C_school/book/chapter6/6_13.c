#include <stdio.h>

int main(void)
{
    int i =0,sum=0,n;
    printf("1+2+...n=\n");
    printf("n=");
    scanf("%d",&n);
    
    start:
    i++;
    sum+=i;
    printf("%d",i);
    if(i<n)
    {
        printf("+");
        goto start;
    }
    printf("=%d\n", sum);
    return 0;
}
